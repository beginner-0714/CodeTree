#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=0;
    for(int i=0;i<10;i++){
        cin >> n;
        if(n%2==1){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}