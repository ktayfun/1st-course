#include <iostream>
using namespace std;

int main() {
    int dig;
    cout << "Введите двузначное число:" << " ";
    cin >> dig;
    if (9 < dig and dig < 100)
    {
        int fDig = dig / 10;
        int sDig = dig % 10;
        if (fDig > sDig)
            cout << "Наибольшая цифра" << " " << fDig << "\n" << "Наименьшая цифра" << " " << sDig;
        else
            cout << "Наибольшая цифра" << " " << sDig << "\n" << "Наименьшая цифра" << " " << fDig;
    }
    else
    {
        cout << "Неверное значение";
    }
    return 0;
}
