#include <iostream>

using namespace std;

int N;
int nums[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    // Please write your code here.
    int count_nums[1000]={},cnt=0;
    for(int i=0;i<N;i++){
        count_nums[nums[i]]++;
    }

    for(int i=999;i>=0;i--){
        if(count_nums[i]==1){
            cout << i << endl;
            cnt++;
            break;
        }
    }

    if(cnt == 0){
        cout << -1;
    }

    return 0;
}
