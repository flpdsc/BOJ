//한 줄로 서기 https://www.acmicpc.net/problem/1138
#include <iostream>
using namespace std;

int line[11], res[11];

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; ++i)
        cin >> line[i];

    for(int i=n; i>0; --i)
        for(int j=i+1; j<=n; ++j)
            if(line[j]>=line[i])
                ++line[j];

    for(int i=1; i<=n; ++i)
        res[line[i]] = i;

    for(int i=0; i<n; ++i)
        cout << res[i] << ' ';

    return 0;
}