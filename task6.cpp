#include <iostream>
using namespace std;

int main() {
    cout << "Введите трехзначное число:" << " ";
    int dig;
    cin >> dig;
    if (dig > 99 and dig < 1000)
    {
        int firstDig = dig / 100;
        int secondDig = (dig / 10) % 10;
        int thirdDig = dig % 10;
        if (firstDig == secondDig or firstDig == thirdDig or secondDig == thirdDig)
            cout << "В числе есть одинаковые цифры";
        else
            cout << "В числе нет одинаковых цифр";
    }
    else
    {
        cout << "Неверное значение";
    }

}