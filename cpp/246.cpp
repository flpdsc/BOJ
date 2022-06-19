//N과 M (12) https://www.acmicpc.net/problem/15666
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> v, r(8);

void DFS(int depth, int start, int index)
{
    if(depth==m)
    {
        for(int i=0; i<m; ++i)
        {
            cout << r[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=start; i<v.size(); ++i)
    {
        r[index] = v[i];
        DFS(depth+1, i, index+1);
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; ++i)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    //중복 제거 정렬
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    DFS(0, 0, 0);

    return 0;
}