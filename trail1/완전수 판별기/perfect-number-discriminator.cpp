#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum=0,n;
    cin >> n;

    for(int i=1;i<n;i++){
        if(n%i==0){
            sum += i;
        }
    }
    if(n==sum){
        cout << 'P';
    }
    else{
        cout << 'N';
    }
    return 0;
}