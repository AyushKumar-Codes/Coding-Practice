#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip> // for std::setprecision
#include <sstream> // for std::istringstream

struct Cashflow {
    double amount;
    std::tm date;
};

std::tm parseDate(const std::string& dateStr) {
    std::tm date = {};
    std::istringstream iss(dateStr);
    iss.imbue(std::locale("C")); // set the locale to "C" to avoid potential issues
    iss >> std::get_time(&date, "%d-%b-%Y");
    return date;
}

double calculatePV(double rate, const std::vector<Cashflow>& cashflows) {
    double pv = 0.0;
    for (const Cashflow& cf : cashflows) {
        double days = difftime(std::mktime(const_cast<std::tm*>(&cf.date)), std::mktime(const_cast<std::tm*>(&cashflows[0].date))) / (60 * 60 * 24); // convert seconds to days
        pv += cf.amount / pow(1 + rate, days / 365.0);
    }
    return pv;
}

double calculateDerivative(double rate, const std::vector<Cashflow>& cashflows) {
    double der = 0.0;
    for (const Cashflow& cf : cashflows) {
        double days = difftime(std::mktime(const_cast<std::tm*>(&cf.date)), std::mktime(const_cast<std::tm*>(&cashflows[0].date))) / (60 * 60 * 24); // convert seconds to days
        der -= days * cf.amount / (365 * pow(1 + rate, (days / 365.0) + 1));
    }
    return der;
}

double calculateXIRR(const std::vector<Cashflow>& cashflows, double initialRate, double tolerance = 0.0001) {
    double rate = initialRate;

    for (int i = 0; i < 100; ++i) {
        double pv = calculatePV(rate, cashflows);
        double der = calculateDerivative(rate, cashflows);

        if (std::abs(pv) < tolerance || std::abs(der) < tolerance) {
            break; // Converged to a solution
        }

        rate = rate - pv / der;

        if (std::abs(der) < tolerance) {
            break; // Avoid division by near-zero derivative
        }
    }

    return rate * 100; // Convert to percentage
}


int main() {
    int n;
    std::cin >> n;

    std::vector<Cashflow> cashflows;
    cashflows.reserve(n);

    for (int i = 0; i < n; ++i) {
        double amount;
        std::string dateStr;
        std::cin >> amount >> dateStr;

        Cashflow cf;
        cf.amount = amount;
        cf.date = parseDate(dateStr);

        cashflows.push_back(cf);
    }

    double initialRate = 0.1; // You can set any reasonable initial rate
    double rate = calculateXIRR(cashflows, initialRate);

    std::cout << std::fixed << std::setprecision(2) << rate ;

    return 0;
}
