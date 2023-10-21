#include <iostream>
using namespace std;
#include <cmath>
#define PI 3.14159265

int main() {
    double x,y;

    cout << "Введите x:" << " ";
    cin >> x;

    cout << "Введите y:" << " ";
    cin >> y;

    cout << pow((1-tan(x * PI / 180)), (1/tan(x * PI / 180))) + cos((x-y) * PI / 180);
}
