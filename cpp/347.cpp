//N번째 큰 수 https://www.acmicpc.net/problem/2075
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int n, inp;
    priority_queue<int, vector<int>, greater<int>> pq;
    cin >> n;

    for(int i=0; i<n*n; ++i)
    {
        cin >> inp;
        pq.push(inp);
        if(pq.size()>n) pq.pop();
    }
    cout << pq.top() << '\n';

    return 0;
}