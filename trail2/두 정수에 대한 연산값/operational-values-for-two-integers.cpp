#include <iostream>

using namespace std;

int a, b;
void Plus(int &x,int &y){
    if(x>y){
        x += 25;
        y *= 2;
    }
    else{
        y += 25;
        x *= 2;
    }
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    Plus(a,b);
    cout << a << ' ' << b;

    return 0;
}