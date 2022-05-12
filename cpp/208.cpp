//집합의 표현 https://www.acmicpc.net/problem/1717
#include <iostream>
using namespace std;

int unf[1000001];

int Find(int v)
{
    if(v==unf[v])
    {
        return v;
    }
    else
    {
        return unf[v] = Find(unf[v]); //경로압축
    }
}

void Union(int x, int y)
{
    x = Find(x);
    y = Find(y);
    if(x!=y) unf[x] = y;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    for(int i=0; i<=n; ++i)
    {
        unf[i] = i;
    }

    for(int i=0; i<m; ++i)
    {
        int op, a, b;
        cin >> op >> a >> b;
        if(op==0) //Union
        {
            Union(a, b);
        }
        else //Find
        {
            a = Find(a);
            b = Find(b);
            if(a==b) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }
    return 0;
}