#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int max,min,arr[100]={};

    for(int i=0;i<100;i++){
        cin >> arr[i];
        if(i==0){
            max = arr[0];
            min = arr[0];
        }
        else if(arr[i] == 999 || arr[i] == -999){
            break;
        }
        else if(arr[i] > max){
            max = arr[i];
        }
        else if(arr[i] < min){
            min = arr[i];
        }

    }
    cout << max << ' ' << min;
    return 0;
}