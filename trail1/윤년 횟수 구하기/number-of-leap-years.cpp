#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt1=0,cnt2=0,n;
    cin >> n;

    for(int i=1;i<=n;i++){
        if(i%100==0 && i%400!=0){
            cnt2++;
        }
        else if(i%4==0){
            cnt1++;
        }
    }
    cout << cnt1;

    return 0;
}