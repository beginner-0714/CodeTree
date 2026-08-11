#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt=0,n,sum=0;
    for(int i=0;i<10;i++){
        cin >> n;
        if(n>=0 && n<=200){
            sum +=n;
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (double)sum/cnt;
    return 0;
}