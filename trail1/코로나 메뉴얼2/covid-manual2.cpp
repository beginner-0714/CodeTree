#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[3]={},count_arr[4]={};
    string str[3]={};

    for(int i=0;i<3;i++){
        cin >> str[i] >> arr[i];
        if(arr[i]>=37 && str[i]=="Y"){
            count_arr[0]++;
        }
        else if(arr[i] >= 37 && str[i]=="N"){
            count_arr[1]++;
        }
        else if(arr[i]<37 && str[i]=="Y"){
            count_arr[2]++;
        }
        else{
            count_arr[3]++;
        }
    }

    for(int i=0;i<4;i++){
        cout << count_arr[i] << ' ';
    }
    if(count_arr[0]>=2){
        cout << 'E';
    }
    return 0;
}