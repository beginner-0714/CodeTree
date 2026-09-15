#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,arr[10]={},sum=0;

    cin >> a >> b;

    while(a>=2){
        arr[a%b]++;
        a /= b;
    }

    for(int i=0;i<=9;i++){
        sum += (arr[i]*arr[i]);
    }
    cout << sum;
    return 0;
}