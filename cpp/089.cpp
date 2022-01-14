//A → B https://www.acmicpc.net/problem/16953
#include <iostream>
#include <queue>
using namespace std;
const int MAX = 1000000000;

int main()
{
    int A, B;
    bool flag = false;
    cin >> A >> B;
    queue<pair<int, int> > q;
    q.push(make_pair(A, 1));
    while(!q.empty()){
        int num = q.front().first;
        int res = q.front().second;
        q.pop();
        if(num==B){
            cout << res << '\n';
            flag = true;
            break;
        }
        int m_num = num*2;
        int a_num = (num*10)+1;
        if(m_num<=B) q.push(make_pair(m_num, res+1));
        if(num<=MAX/10 && a_num<=B) q.push(make_pair(a_num, res+1));
    }
    if(!flag) cout << "-1\n";
    return 0;
}