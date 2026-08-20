#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    bool s = false;
    cin >> n;

    for(int i=2;i<=n-1;i++){
        if(n%i == 0){
            s = true;
        }
    }


    if(s == true){
        cout << 'C';
    }
    else{
        cout << 'N';
    }
    return 0;
}