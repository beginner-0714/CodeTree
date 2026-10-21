#include <iostream>
#include <string>
#include <list>

using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> A[i];
        }
    }

    // Please write your code here.
    list<int> L;
    for(int i=0;i<N;i++){
        if(command[i] == "push_front"){
            L.push_front(A[i]);
        }
        else if(command[i] == "push_back"){
            L.push_back(A[i]);
        }
        else if(command[i] == "pop_front"){
            cout << L.front() << endl;
            L.pop_front();
        }
        else if(command[i] == "pop_back"){
            cout << L.back() << endl;
            L.pop_back();
        }
        else if(command[i] == "size"){
            cout << L.size() << endl;
        }
        else if(command[i] == "empty"){
            cout << L.empty() << endl;
        }
        else if(command[i] == "front"){
            cout << L.front() << endl;
        }
        else if(command[i] == "back"){
            cout << L.back() << endl;
        }
    }

    return 0;
}
