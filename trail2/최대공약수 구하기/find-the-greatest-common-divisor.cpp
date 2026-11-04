#include <iostream>

using namespace std;

int n, m;
void MathArr(int n,int m){
    int x = (n>m) ? n : m;
    for(int i=x;i>=1;i--){
        if(n%i == 0 && m%i == 0){
            cout << i;
            break;
        }
    }
}

int main() {
    cin >> n >> m;
    MathArr(n,m);
    // Please write your code here.

    return 0;
}