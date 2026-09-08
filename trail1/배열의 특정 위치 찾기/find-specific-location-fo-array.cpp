#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n=0,sum1=0,sum2=0, arr[10] = {};

    for(int i=0;i<10;i++){
        cin >> arr[i];
        if(i%2==1){
            sum1 += arr[i];
        }

        if((i+1)%3==0){
            sum2 += arr[i];
            n++;
        }
    }

    cout << fixed;
    cout.precision(1);

    cout << sum1 << ' ' << (double)sum2/n;
    return 0;
}