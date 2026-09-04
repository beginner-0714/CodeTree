#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n=0,arr[10] = {};

    for(int i=0;i<10;i++){
        cin >> arr[i];
        if(arr[i]==0){
            break;
        }
        n++;
    }

    for(int j=n-1;j>=0;j--){
        cout << arr[j] << ' ';
    }
    return 0;
}