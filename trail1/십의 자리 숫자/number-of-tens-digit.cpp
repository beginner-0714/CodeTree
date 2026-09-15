#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt=0,arr[100]={},count_arr[10]={};

    for(int i=0;i<100;i++){
        cin >> arr[i];
        if(arr[i]==0){
            break;
        }
        cnt++;
    }

    for(int i=0;i<cnt;i++){
        count_arr[arr[i]/10]++;
    }

    for(int i=1;i<=9;i++){
        cout << i << " - " << count_arr[i] << endl;
    }
    return 0;
}