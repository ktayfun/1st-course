#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int leapYearsBeforeEnd = b / 4 - b / 100 + b / 400;
    int leapYearsBeforeStart = a / 4 - a / 100 + a / 400;

    cout << leapYearsBeforeEnd - leapYearsBeforeStart << endl;
}