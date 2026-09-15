#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10]={},count_arr[7]={};

    for(int i=0;i<10;i++){
        cin >> arr[i];
    }

    for(int i=0;i<10;i++){
        count_arr[arr[i]]++;
    }

    for(int i=1;i<=6;i++){
        cout << i << " - " << count_arr[i] << endl;
    }
    return 0;
}