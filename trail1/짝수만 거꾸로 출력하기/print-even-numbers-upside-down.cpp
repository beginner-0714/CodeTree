#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,arr[100]={};

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int j=n-1;j>=0;j--){
        if(arr[j]%2==0){
            cout << arr[j] << ' ';
        }
    }
    return 0;
}