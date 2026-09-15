#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n1,n2,arr1[100]={},arr2[100]={},cnt=0;
    cin >> n1 >> n2;

    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }

    for(int i=0;i<n2;i++){
        cin >> arr2[i];
    }

    for(int i=0;i<n1;i++){
        if(arr1[i] == arr2[cnt]){
            cnt++;
        }
        else if(cnt != 0 && arr1[i] != arr2[cnt]){
            cnt = 0;
        }

        if(cnt == n2){
            cout << "Yes";
            break;
        }
    }

    if(cnt != n2){
        cout << "No";
    }

    return 0;
}