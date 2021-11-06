//프린터 큐 https://www.acmicpc.net/problem/1966
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t, n, x;
    cin >> t;

    for(int i=0; i<t; ++i){
        cin >> n >> x;

        int cnt=0, pos=0;
        vector<int> doc(n);
        queue<pair<int, int> > Q;

        for(int j=0; j<n; ++j){
            cin >> doc[j];
            if(j==x) Q.push({doc[j], 1});
            else Q.push({doc[j], 0}); 
        }

        sort(doc.begin(), doc.end(), greater<int>());

        while(!Q.empty()){
            if(Q.front().first==doc[pos]){
                cnt++;
                if(Q.front().second==1) break;
                pos++;
            }
            else Q.push(Q.front());
            Q.pop();
        }

        cout << cnt << endl;

    }

    return 0;
}