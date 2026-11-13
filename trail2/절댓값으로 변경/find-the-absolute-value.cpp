#include <iostream>
#include <cstdlib>

using namespace std;

int n;
int arr[50];
void Math_Abs(int n,int *x){
    for(int i=0;i<n;i++){
        x[i]= abs(x[i]);
    }
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    Math_Abs(n,arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << ' ';
    }

    return 0;
}