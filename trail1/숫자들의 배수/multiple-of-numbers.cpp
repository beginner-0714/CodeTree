#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt=0,n,arr[100]={};

    cin >> n;
    for(int i=1;i<=100;i++){
        cout << i*n << ' ';
        if((i*n)%5==0){
            cnt++;
        }
        if(cnt==2){
            break;
        }
    }

    return 0;
}