#include <iostream>
#include <string>

using namespace std;

string A;
void Alphabet(string s){
    int cnt = 1;
    for(int i=1;i<s.size();i++){
        if(s[0] != s[i]){
            cnt++;
        }
    }
    if(cnt >= 2){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}
int main() {
    cin >> A;

    // Please write your code here.
    Alphabet(A);

    return 0;
}