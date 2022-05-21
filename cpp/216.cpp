//오큰수 https://www.acmicpc.net/problem/17298
#include <iostream>
#include <stack>
using namespace std;

int a[1000000], r[1000000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int n;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        cin >> a[i];
        r[i] = -1;
    }

    stack<int> s;
    for(int i=0; i<n; ++i)
    {
        while(!s.empty() && a[s.top()]<a[i])
        {
            r[s.top()] = a[i];
            s.pop();
        }
        s.push(i);
    }

    for(int i=0; i<n; ++i)
    {
        cout << r[i] << ' ';
    }
    cout << '\n';
    return 0;
}
