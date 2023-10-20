#include <iostream>
using namespace std;

int main() {
    cout << "Введите пятизначное число:" << " ";
    int dig;
    cin >> dig;
    if (dig > 9999 and dig < 1000000)
    {
        int revDig = 0;
        int a = dig;
        while (a > 0)
        {
            revDig = revDig * 10 + (a % 10);
            a = a / 10;
        }
        if (dig == revDig)
            cout << "Число является палиндромом";
        else
            cout << "Число не является палиндромом";
    }
    else
    {
        cout << "Неверное значение";
    }

}
