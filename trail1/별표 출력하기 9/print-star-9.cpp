#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt=0;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=(n-1)*2-cnt;j>0;j--){
            cout << ' ';
        }
        
        for(int k=cnt+1;k>0;k--){
            cout << "* ";
        }
        cout << endl;
        cnt += 2;
    }
    return 0;
}