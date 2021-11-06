//요세푸스 문제 https://www.acmicpc.net/problem/1158
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, cnt=0;
    queue<int> Q;
    cin >> n >> k;
    for(int i=1; i<=n; ++i) Q.push(i);
    cout << "<";
    while(!Q.empty()){
        cnt++;
        if(cnt%k!=0) Q.push(Q.front());
        else{
            if(Q.size()!=1) cout << Q.front() << ", ";
            else cout << Q.front() << ">" << endl;
            cnt = 0;
        }
        Q.pop();
    }
    return 0;
}