#include <iostream>

using namespace std;

int n;
int price[1000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    // Please write your code here.
    int x=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(x < price[j]-price[i]){
                x = price[j]-price[i];
            }
        }
    }

    cout << x;

    return 0;
}
