#include <iostream>

using namespace std;

int N,n_Size=0;
string command[10000];
int num[10000],get_Num[10000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_back") {
            cin >> num[i];
        }
        else if(command[i] == "get"){
            cin >> get_Num[i];
        }
    }

    // Please write your code here.
    for(int i=0;i<N;i++){
        if(command[i] == "get"){
            cout << num[get_Num[i]-1] << endl;
        }
        else if(command[i] == "push_back"){
            num[n_Size] = num[i];
            n_Size++;
        }
        else if(command[i] == "size"){
            cout << n_Size << endl;
        }
        else if(command[i] == "pop_back"){
            num[n_Size - 1] = 0;
            n_Size--;
        }
    }

    return 0;
}
