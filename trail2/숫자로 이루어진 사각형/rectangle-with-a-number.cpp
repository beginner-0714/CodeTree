#include <iostream>

using namespace std;

int N;
void Rgl(int num){
    int cnt = 1;
    for(int i=0;i<num;i++){
        for(int j=cnt;j<num+cnt;j++){
            cout << (j-1) % 9 + 1 << ' ';
        }
        cout << endl;
        cnt += num;
    }
}
int main() {
    cin >> N;
    Rgl(N);
    // Please write your code here.

    return 0;
}