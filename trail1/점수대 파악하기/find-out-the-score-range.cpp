#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100]={},count_score[11]={};

    for(int i=0;i<100;i++){
        cin >> arr[i];
        if(arr[i]==0){
            break;
        }
        count_score[arr[i]/10]++;
    }

    for(int i=10;i>=1;i--){
        cout << i*10 << " - " << count_score[i] << endl;
    }
    return 0;
}