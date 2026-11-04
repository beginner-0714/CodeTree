#include <iostream>

using namespace std;

int n, m;

void Rgl(int num,int mum){
    for(int i=0;i<num;i++){
        for(int j=0;j<mum;j++){
            cout << '1';
        }
        cout << endl;
    }
}
int main() {
    cin >> n >> m;\

    Rgl(n,m);
    // Please write your code here.

    return 0;
}