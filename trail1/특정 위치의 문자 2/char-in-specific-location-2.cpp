#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char arr[10] = {};

    for(int i=0;i<10;i++){
        cin >> arr[i];
        if(i==1 || i==4 || i==7){
            cout << arr[i] << ' ';
        }
    }
    return 0;
}