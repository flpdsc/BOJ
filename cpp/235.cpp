//배열 합치기 https://www.acmicpc.net/problem/11728
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a, b;
    int tmp;
    for(int i=0; i<n; ++i)
    {
        cin >> tmp;
        a.push_back(tmp);
    }

    for(int i=0; i<m; ++i)
    {
        cin >> tmp;
        b.push_back(tmp);
    }

    int pa=0, pb=0;
    for(int i=0; i<n+m; ++i)
    {
        if(pa==n)
        {
            for(int i=pb; i<m; ++i)
                cout << b[i] << ' ';
            break;
        }
        if(pb==m)
        {
            for(int i=pa; i<n; ++i)
                cout << a[i] << ' ';
            break;
        }

        if(a[pa]>b[pb])
            cout << b[pb++] << ' ';
        else
            cout << a[pa++] << ' ';
    }
    return 0;
}