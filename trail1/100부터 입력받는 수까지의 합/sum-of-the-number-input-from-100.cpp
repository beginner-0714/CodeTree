#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum=0,n;
    cin >> n;
    for(int i=n;i<=100;i++){
        sum += i;
    }
    cout << sum;
    return 0;
}