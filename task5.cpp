#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Введите x:" << " ";
    cin >> x;

    cout << "Введите y:" << " ";
    cin >> y;

    if (x > 0 and y > 0)
        cout << "Ваша точка в I четверти";
    else if (x < 0 and y < 0)
        cout << "Ваша точка в III четверти";
    else if (x < 0 and y > 0)
        cout << "Ваша точка в II четверти";
    else
        cout << "Ваша точка в IV четверти";

    return 0;
}
