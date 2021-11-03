//숫자 카드2 https://www.acmicpc.net/problem/10816
//upper_bound, lower_bound
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n;
    vector<int> card(n);
    for(int i=0; i<n; ++i) cin >> card[i];
    sort(card.begin(), card.end());

    cin >> m;
    vector<int> pick(m);
    for(int i=0; i<m; ++i){
        int tmp;
        cin >> tmp;
        auto upper = upper_bound(card.begin(), card.end(), tmp);
        auto lower = lower_bound(card.begin(), card.end(), tmp);
        pick[i] = upper - lower;
    }

    for(auto n : pick) cout << n << " ";
    cout << endl;
    return 0;
}