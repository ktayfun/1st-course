#include <iostream>
using namespace std;

int main() {

    int N, X, Y;
    cin >> N >> X >> Y;
    int total = X * N;
    int min_fin = Y * (N + 1);
    int min_ones = max(0, total - min_fin);

    cout << min_ones;

    return 0;
}
