#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a,b=1;
    cin >> n >> a;

    while(b<=n){
        if(b%a==0){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
        b++;
    }
    return 0;
}