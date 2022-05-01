//신입 사원 https://www.acmicpc.net/problem/1946
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T, N, rScore, iScore;
    cin >> T;
    while(T--)
    {
        cin >> N;
        vector<pair<int, int> > s;
        for(int i=0; i<N; ++i)
        {
            cin >> rScore >> iScore;
            s.push_back(make_pair(rScore, iScore));
        }
        sort(s.begin(), s.end());
        
        int res=1;
        int criteria = s[0].second;

        for(int i=1; i<N; ++i)
        {
            if(s[i].second<criteria)
            {
                res++;
                criteria = s[i].second;
            }
        }
        cout << res << '\n';
    }
    return 0;
}