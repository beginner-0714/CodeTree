#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt=0,sum=0,average=0,arr[10]={};

    for(int i=0;i<10;i++){
        cin >> arr[i];
        if(arr[i]>=250){
            break;
        }
        sum += arr[i];
        cnt++;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (double)sum/cnt;
    return 0;
}