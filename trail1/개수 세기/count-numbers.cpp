#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100]={},n,m,cnt=0;
    cin >> n >> m;

    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]==m){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}