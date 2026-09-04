#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum=0,n=0,arr[10]={};

    for(int i=0;i<10;i++){
        cin >> arr[i];
        if(arr[i]==0){
            break;
        }
        if(arr[i]%2==0){
            sum += arr[i];
            n++;
        }
    }

    cout << n << ' ' << sum;
    return 0;
}