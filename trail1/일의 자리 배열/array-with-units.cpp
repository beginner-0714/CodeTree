#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int p,pp,temp;
    cin >> pp >> p;

    cout << pp << ' ' << p << ' ';
    for(int i=0;i<8;i++){
        temp = pp + p;

        
        cout << temp%10 << ' ';
        pp = p;
        p = temp;
    }
    return 0;
}