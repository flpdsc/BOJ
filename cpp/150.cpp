//제로 https://www.acmicpc.net/problem/10773
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int k, res=0;
    stack<int> s;
    cin >> k;
    while(k--){
        int num;
        cin >> num;
        if(num==0) s.pop();
        else s.push(num);
    }
    while(!s.empty()){
        res += s.top();
        s.pop();
    }
    cout << res << '\n';
    return 0;
}
