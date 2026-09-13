#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt=0,arr[100] = {};

    for(int i=0;i<100;i++){
        cin >> arr[i];
        if(arr[i] % 2 == 1){
            arr[i] += 3;
            cnt++;
        }
        else if(arr[i]==0){
            break;
        }
        else{
            arr[i] /= 2;
            cnt++;
        }
    }

    for(int j=0;j<cnt;j++){
        cout << arr[j] << ' ';
    }
    return 0;
}