#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,a=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int arr[4] = {};
        int sum=0;
        for(int j=0;j<4;j++){
            cin >> arr[j];
            sum += arr[j];
            if(j==3 && (double)sum/4>=60){
                cout << "pass" << endl;
                a++;
            }
            else if(j==3 && (double)sum/4<60){
                cout << "fail" << endl;
            }
        }
    }
    cout << a;
    return 0;
}