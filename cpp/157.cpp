//카드2 https://www.acmicpc.net/problem/2164
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n;
    queue<int> q;
    cin >> n;
    for(int i=1; i<=n; ++i)
        q.push(i);
    
    int tmp;
    while(q.size()>1){
        q.pop();
        tmp = q.front();
        q.pop();
        q.push(tmp);
    }
    cout << q.front() << '\n';

    return 0;
}