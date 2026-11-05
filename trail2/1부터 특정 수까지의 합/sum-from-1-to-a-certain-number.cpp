#include <iostream>

using namespace std;

int N;
int Math_Sum(int N){
    int arr = 0;
    for(int i=1;i<=N;i++){
        arr += i;
    }
    return arr/10;
}

int main() {
    cin >> N;
    int num = Math_Sum(N);
    cout << num;

    return 0;
}