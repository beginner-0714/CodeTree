#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int isReal(int n,int m){
    int cnt;
    for(int i=0;i<n;i++){
        cnt = 0;
        if(text[i] == pattern[0]){
            for(int j=0;j<m;j++){
                if(text[i+j] == pattern[j]){
                    cnt++;
                }
            }
            if(cnt == m){
                return i;
            }
        }
    }
    if(cnt == 0){
        return -1;
    }
}

int main() {
    cin >> text;
    cin >> pattern;

    // Please write your code here.
    cout << isReal(text.size(),pattern.size());

    return 0;
}