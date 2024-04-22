#include <iostream>
#include <map>
using namespace std;
class NumberToWordsConverter{
  int *p=new int(2);  
};
map<int, string> words = {
    {0, ""}, {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"},
    {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}, {10, "Ten"},
    {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"}, {14, "Fourteen"},
    {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"}, {18, "Eighteen"},
    {19, "Nineteen"}, {20, "Twenty"}, {30, "Thirty"}, {40, "Forty"},
    {50, "Fifty"}, {60,"Sixty"},{70,"Seventy"},{80,"Eighty"},
    {90,"Ninety"}
};

string convert(int num) {
    if (num<=20 || num==30 || num==40 || num==50 || num==60 || num==70 || num==80 || num==90)
        return words[num];
    else if (num>20 && num<100)
        return words[num - num%10] + ' ' + words[num%10];
    else if (num>=100 && num<1000)
        return words[num/100] + " Hundred" + ((num%100 != 0) ? ' ' + convert(num%100) : "");
    else if (num>=1000 && num<100000)
        return convert(num/1000) + " Thousand" + ((num%1000 != 0) ? ' ' + convert(num%1000) : "");
}

int main() {
    int amount;
    cin >> amount;
    if(amount < 1 || amount > 99999)
        cout << "Invalid input";
    else
        cout << convert(amount);
    return 0;
}
