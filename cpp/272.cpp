//수리공 항승 https://www.acmicpc.net/problem/1449
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, l;
    vector<int> pipe;
    cin >> n >> l;
    for(int i=0; i<n; ++i)
    {
        int lp;
        cin >> lp;
        pipe.push_back(lp);
    }
    sort(pipe.begin(), pipe.end());
    int res=1;
    int tape=pipe[0]+l-1;
    for(int i=1; i<pipe.size(); ++i)
    {
        if(tape<pipe[i])
        {
            ++res;
            tape = pipe[i]+l-1;
        }
    }
    cout << res << '\n';
    return 0;
}