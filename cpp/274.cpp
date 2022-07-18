//대칭 차집합 https://www.acmicpc.net/problem/1269
#include <iostream>
#include <map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, res=0;
    map<int, int> m; 
    cin >> a >> b;
    for(int i=0; i<a+b; ++i)
    {
        int num;
        cin >> num;
        m[num]++;
    }
    for(auto it : m)
    {
        if(it.second==1)
        {
            ++res;
        }
    }
    cout << res << '\n';
    return 0;
}