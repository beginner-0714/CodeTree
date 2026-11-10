#include <iostream>

using namespace std;

int a, b;

int Multiply(int a,int b){
    int mul=1;
    for(int i=0;i<b;i++){
        mul *= a; 
    }
    return mul;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    cout << Multiply(a,b);

    return 0;
}