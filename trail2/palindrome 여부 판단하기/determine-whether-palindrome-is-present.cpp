#include <iostream>
#include <string>

using namespace std;

string A;
void Palindrome(string s){
    string str;
    for(int i=s.size()-1;i>=0;i--){
        str += s[i];
    }
    if(str == s){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}

int main() {
    cin >> A;

    // Please write your code here.
    Palindrome(A);

    return 0;
}