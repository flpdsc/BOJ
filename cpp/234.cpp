//N과 M (9) https://www.acmicpc.net/problem/15663
#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int in[8], out[8];
bool isVisited[8];

void Find(int num)
{
    if(num==m)
    {
        for(int i=0; i<m; ++i)
        {
            cout << out[i] << ' ';
        }
        cout << '\n';
        return;
    }
    int pre = -1;
    for(int i=0; i<n; ++i)
    {
        if(!isVisited[i] && pre != in[i])
        {
            pre = in[i];
            isVisited[i] = true;
            out[num] = in[i];
            Find(num+1);
            isVisited[i] = false;
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; ++i)
        cin >> in[i];
    sort(in, in+n);

    Find(0);

    return 0;
}