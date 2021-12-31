//카드 정렬하기 https://www.acmicpc.net/problem/1715
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, res=0;
    priority_queue<int, vector<int>, greater<int> > cb;
    cin >> n;
    for(int i=0; i<n; ++i){
        int inp;
        cin >> inp;
        cb.push(inp);
    }

    int cnt = n-1;
    while(cnt--)
    {
        int num1 = cb.top();
        cb.pop();
        int num2 = cb.top();
        cb.pop();
        res += (num1+num2);
        cb.push(num1+num2);
    }
    cout << res << '\n';
    return 0;
}