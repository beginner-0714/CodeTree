#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int prod=1,a,b;
    cin >> a >> b;

    for(int i=a;i<=b;i++){
        prod *= i;
    }

    cout << prod;

    return 0;
}