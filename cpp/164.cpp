//요세푸스 문제 0 https://www.acmicpc.net/problem/11866
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, k;
    queue<int> q;
    
    cin >> n >> k;
    for(int i=1; i<=n; ++i)
        q.push(i);

    cout << '<';
    while(!q.empty())
    {
        for(int i=1; i<=k; ++i)
        {
            q.front();
            if(i!=k) q.push(q.front());
            else cout << q.front();
            q.pop();
        }
        if(q.empty()) cout << '>';
        else cout << ", ";
    }

    return 0;
}