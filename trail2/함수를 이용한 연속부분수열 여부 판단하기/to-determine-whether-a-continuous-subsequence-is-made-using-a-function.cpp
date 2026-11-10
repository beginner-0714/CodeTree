#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

void YoN(int n1,int a[100],int n2,int b[100]){
    bool isTrue = false;
    for(int i=0;i<n1;i++){
        int cnt = 0;
        if(a[i] == b[0]){
            for(int j=0;j<n2;j++){
                if(b[j] == a[i+j]){
                    cnt++;
                }
            }
        }
        if(cnt == n2){
            cout << "Yes";
            isTrue = true;
            break;
        }
    }
    if(isTrue == false){
        cout << "No";
    }
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    // Please write your code here.
    YoN(n1,a,n2,b);

    return 0;
}