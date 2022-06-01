//기타줄 https://www.acmicpc.net/problem/1049
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    const int MAX = 1000;
    int min_set=MAX, min_sin=MAX;
    for(int i=0; i<m; ++i)
    {
        int set, sin;
        cin >> set >> sin;
        min_set = min(min_set, set);
        min_sin = min(min_sin, sin);
    }

    int res;
    res = min(min_set*(n/6+1), min_set*(n/6)+min_sin*(n%6));
    res = min(res, min_sin*n);

    cout << res << '\n';
    return 0;
}