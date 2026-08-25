#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=0;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i*2;j++){
            cout << ' ';
        }

        for(int k=(n*2-1)-cnt;k>0;k--){
            cout << "* ";
        }
        cout << endl;
        cnt += 2;
    }
    return 0;
}