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
        queue<int> Q, C;

        for(int j=0; j<n; ++j){
            cin >> doc[j];
            Q.push(doc[j]);
            if(j==x) C.push(1);
            else C.push(0); 
        }

        sort(doc.begin(), doc.end(), greater<int>());

        while(!Q.empty()){
            if(Q.front()==doc[pos]){
                cnt++;
                if(C.front()==1) break;
                pos++;
            }
            else{
                Q.push(Q.front());
                C.push(C.front());
            }
            Q.pop();
            C.pop();
        }

        cout << cnt << endl;

    }

    return 0;
}