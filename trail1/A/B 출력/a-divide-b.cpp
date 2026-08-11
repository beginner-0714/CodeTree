#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << a / b << ".";

    int rest = a % b;

    for(int i = 0; i < 20; i++) {
        rest *= 10;
        cout << rest / b;
        rest %= b;
    }

    return 0;
}