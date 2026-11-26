#include <iostream>

using namespace std;

int N;

void PrintHelloWorld(int n){
    if(n == 0){
        return;
    }
    PrintHelloWorld(n-1);
    cout << "HelloWorld" << endl;
}
int main() {
    cin >> N;

    // Please write your code here.
    PrintHelloWorld(N);

    return 0;
}