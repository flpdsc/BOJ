//모든 순열 https://www.acmicpc.net/problem/10974
#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> res;
bool ch[9];

void sol(int idx)
{
    if(idx==n)
    {
        for(int i=0; i<res.size(); ++i)
        {
            cout << res[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i=1; i<=n; ++i)
    {
        if(!ch[i])
        {
            ch[i] = true;
            res.push_back(i);
            sol(idx+1);
            ch[i] = false;
            res.pop_back();
        }
    }
}

int main()
{
    cin >> n;
    sol(0);
    return 0;
};