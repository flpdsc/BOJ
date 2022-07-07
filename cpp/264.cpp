//좋은 단어 https://www.acmicpc.net/problem/3986
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int n, res=0;
    stack<char> s;
    cin >> n;
    while(n--)
    {
        string voca;
        cin >> voca;
        for(int i=0; i<voca.size(); ++i)
        {
            if(s.empty() || s.top()!=voca[i])
            {
                s.push(voca[i]);
            }
            else if(s.top()==voca[i])
            {
                s.pop();
            }
        }
        if(s.empty())
        {
            ++res;
        }
        else
        {
            while(!s.empty())
            {
                s.pop();
            }
        }
    }
    cout << res << '\n';
    return 0;
}