#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=0;
    cin >> n;
    int arr[100] = {1,n};

    for(int i=2;i<100;i++){
        arr[i] = arr[i-1] + arr[i-2];
        cnt++;
        if(arr[i] > 100){
            break;
        }
        
    }

    for(int j=0;j<cnt+2;j++){
        cout << arr[j] << ' ';
    }

    return 0;
}