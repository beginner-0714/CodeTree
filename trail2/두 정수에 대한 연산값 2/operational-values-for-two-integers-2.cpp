#include <iostream>

using namespace std;

int a, b;
void Mathpm(int &x,int &y){
    if(x>y){
        x *= 2;
        y += 10;
    }
    else{
        y *= 2;
        x += 10;
    }
}
int main() {
    cin >> a >> b;

    // Please write your code here.
    Mathpm(a,b);
    cout << a << ' ' << b;

    return 0;
}