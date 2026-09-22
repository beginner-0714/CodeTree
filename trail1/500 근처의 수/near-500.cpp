#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10]={},x=0,y=0;
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }

    for(int i=0;i<10;i++){
        if(arr[i]>x && arr[i]<500){
            x = arr[i];
        }
        else if(arr[i]>500){
            y = arr[i];
        }
    }

    for(int i=0;i<10;i++){
        if(arr[i]<y && arr[i]>500){
            y = arr[i];
        }
    }
    cout << x << ' ' << y;
    return 0;
}