//성적 통계 https://www.acmicpc.net/problem/5800
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int k;
    cin >> k;
    for(int i=1; i<=k; ++i){
        int n;
        cin >> n;
        vector<int> score(n);
        for(int j=0; j<n; ++j){
            cin >> score[j];
        }
        sort(score.begin(), score.end(), greater<>());
        int mx, mn, lgap=0;
        mx = score.front();
        mn = score.back();
        for(int j=1; j<score.size(); ++j){
            lgap = max(lgap, score[j-1]-score[j]);
        }
        cout << "Class " << i << '\n';
        cout << "Max " << mx << ", Min " << mn << ", Largest gap " << lgap << '\n';
    }
    return 0;
}