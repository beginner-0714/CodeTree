#include <iostream>
using namespace std;

void Print10Stars(){
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            cout << '*';
        }
        cout << endl;
    }
}
int main() {
    // Please write your code here.
    Print10Stars();
    return 0;
}