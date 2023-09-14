#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Product {
    string name;
    double price;
    int quantity;

public:
    Product(const string& n, double p, int q) : name(n), price(p), quantity(q) {}

    double getTotalPrice() const {
        return price * quantity;
    }

    void print() const {
        cout << "Product Name: " << name << endl;
        cout << "Total Price: " << fixed << setprecision(2) << getTotalPrice() << endl;
    }
};

int main() {
    int maxProducts;
    cin >> maxProducts;

    Product* products[maxProducts];

    for (int i = 0; i < maxProducts; i++) {
        string name;
        double price;
        int quantity;

        cin.ignore();
        getline(cin, name);
        cin >> price >> quantity;

        products[i] = new Product(name, price, quantity);
    }

    cout << "Shopping Cart details:" << endl;
    for (int i = 0; i < maxProducts; i++) {
        products[i]->print();
    }

    for (int i = 0; i < maxProducts; i++) {
        delete products[i];
    }

    return 0;
}