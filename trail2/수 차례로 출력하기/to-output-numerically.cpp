#include <iostream>

using namespace std;

int N;

void PrintNum(int n){
    if(n == 0){
        return;
    }
    cout << n << ' ';
    PrintNum(n-1);
}

void PrintRNum(int n){
    if(n == 0){
        return;
    }
    PrintRNum(n-1);
    cout << n << ' ';
}

int main() {
    cin >> N;

    // Please write your code here.
    PrintRNum(N);
    cout << endl;
    PrintNum(N);

    return 0;
}