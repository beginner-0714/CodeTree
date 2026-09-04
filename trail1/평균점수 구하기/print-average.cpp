#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double sum=0, arr[8] = {};

    for(int i=0;i<8;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    cout << fixed;
    cout.precision(1);

    cout << sum/8;
    return 0;
}