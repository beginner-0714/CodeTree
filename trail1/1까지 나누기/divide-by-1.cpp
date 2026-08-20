#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a=0,cnt=0;
    cin >> n;
    a=n;
    for(int i=1;i<=n;i++){
        a /= i;
        cnt++;
        if(a <= 1){
            cout << cnt;
            break;
        }
    }
    return 0;
}