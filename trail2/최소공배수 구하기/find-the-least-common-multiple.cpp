#include <iostream>

using namespace std;

int n, m;
void MathArr(int n,int m){
    bool isStop = false;
    int x = n>m ? n:m;
    for(int i=1;i<=x && isStop == false;i++){
        for(int j=1;j<=x;j++){
            if((i*n) == (j*m)){
                cout << i*n;
                isStop = true;
                break;
            }
        }
    }
}

int main() {
    cin >> n >> m;
    MathArr(n,m);

    // Please write your code here.

    return 0;
}