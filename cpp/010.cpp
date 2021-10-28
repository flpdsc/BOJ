//덱 https://www.acmicpc.net/problem/10866
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    deque<int> dq;
    int n;
    cin >> n;
    for (int i=0; i<n; ++i){
        string cmd;
        int data;
        cin >> cmd;
        if(cmd=="push_front"){
            cin >> data;
            dq.push_front(data);
        }
        else if(cmd=="push_back"){
            cin >> data;
            dq.push_back(data);
        }
        else if(cmd=="pop_front"){
            if(dq.empty()) cout << -1 << endl;
            else{
                cout << dq.front() << endl;
                dq.pop_front();
            }
        }
        else if(cmd=="pop_back"){
            if(dq.empty()) cout << -1 << endl;
            else{
                cout << dq.back() << endl;
                dq.pop_back();
            }
        }
        else if(cmd=="size"){
            cout << dq.size() << endl;
        }
        else if(cmd=="empty"){
            if(dq.empty()) cout << 1 << endl;
            else cout << 0 << endl;   
        }
        else if(cmd=="front"){
            if(dq.empty()) cout << -1 << endl;
            else cout << dq.front() << endl;
        }
        else if(cmd=="back"){
            if(dq.empty()) cout << -1 << endl;
            else cout << dq.back() << endl;
        }
    }
    return 0;
}