#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100]={},n;
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int x = arr[1] - arr[0];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(x>arr[i]-arr[j] && (arr[i]-arr[j])>=0 && arr[i] != arr[j]){
                x = arr[i]-arr[j];
            }
        }
    }
    cout << x;
    return 0;
}