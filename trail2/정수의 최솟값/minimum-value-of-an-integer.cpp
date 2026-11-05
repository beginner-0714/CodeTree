#include <iostream>

using namespace std;

int a, b, c;
int Min(int a,int b,int c){
    return a>b ? (b>c ? c : b):(a>c ? c:a);
}
int main() {
    cin >> a >> b >> c;
    cout << Min(a,b,c);
    // Please write your code here.

    return 0;
}