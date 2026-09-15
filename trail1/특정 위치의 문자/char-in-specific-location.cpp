#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char word[6] = {'L','E','B','R','O','S'},c;
    int idx=0;
    cin >> c;

    for(int i=0;i<6;i++){
        if(c == word[i]){
            cout << i;
            idx = 1;
        }
    }
    if(idx == 0){
        cout << "None";
    }
    return 0;
}