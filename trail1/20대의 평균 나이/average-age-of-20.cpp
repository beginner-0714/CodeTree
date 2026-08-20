#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum=0,n,cnt=0;
    while(1){
        cin >> n;
        if(n>=30 || n<20){
            cout << fixed;
            cout.precision(2);
            cout << (double)sum/cnt;
            break;
        }
        sum += n;
        cnt++;
    }
    return 0;
}