#include <iostream>

using namespace std;

int a, b;
bool Tsn(int n){
    while(n > 0){
        if(n%10 == 3 || n%10 == 6 || n%10 == 9){
            return 1;
        }
        n /= 10;
    }
    return 0;
}

bool IsNumber(int n){
    return n%3 == 0 || Tsn(n);
}

int main() {
    cin >> a >> b;
    int cnt = 0;
    for(int i=a;i<=b;i++){
        if(IsNumber(i)){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}