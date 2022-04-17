//큐 2 https://www.acmicpc.net/problem/18258
#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    while(n--)
    {
        string cmd;
        cin >> cmd;

        if(cmd=="push")
        {
            int num;
            cin >> num;
            q.push(num);
        }
        else if(cmd=="size") 
        {
            cout << q.size() << '\n';
        }
        else if(cmd=="empty") 
        {
            cout << q.empty() << '\n';
        }
        else{
            if(q.empty())
            {
                cout << "-1\n";
            }
            else if(cmd=="pop")
            {
                cout << q.front() << '\n';
                q.pop();
            }
            else if(cmd=="front")
            {
                cout << q.front() << '\n';
            }
            else if(cmd=="back")
            {
                cout << q.back() << '\n';
            }
        }
    }
    return 0;
}