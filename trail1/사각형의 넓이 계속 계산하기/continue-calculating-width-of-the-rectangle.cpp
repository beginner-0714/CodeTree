#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int row,column;
    char c;
    while(1){
        cin >> row >> column >> c;
        cout << row*column << endl;
        if(c == 'C'){
            break;
        }
    }
    return 0;
}