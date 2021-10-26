//큐 https://www.acmicpc.net/problem/10845
#include <iostream>
using namespace std;
int queue[10000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, front=0, rear=0;
    cin >> n;
    for(int i=0; i<n; ++i){
        string cmd;
        cin >> cmd;
        if(cmd=="push"){
            int data;
            cin >> data;
            queue[rear++] = data;
        }
        else if(cmd=="pop"){
            if(front==rear) cout << -1 << endl; 
            else cout << queue[front++] << endl;
        }
        else if(cmd=="size"){
            cout << rear-front << endl;
        }
        else if(cmd=="empty"){
            if(rear==front) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if(cmd=="front"){
            if(front==rear) cout << -1 << endl; 
            else cout << queue[front] << endl;
        }
        else if(cmd=="back"){
            if(front==rear) cout << -1 << endl; 
            else cout << queue[rear-1] << endl;
        }
    }
    return 0;
}