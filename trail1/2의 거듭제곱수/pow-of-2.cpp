#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=0;
    cin >> n;

    while(1){
        if(n==1){
            cout << cnt;
            break;
        }
        n /= 2;
        cnt++;
    }
    return 0;
}