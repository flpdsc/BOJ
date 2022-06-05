//괄호의 값 https://www.acmicpc.net/problem/2504
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string str;
    cin >> str;

    stack<char> s;

    int answer=0, tmp=1;
    for(int i=0; i<str.size(); ++i)
    {
        if(str[i]=='(' || str[i]=='[')
        {
            if(str[i]=='(') tmp *= 2;
            if(str[i]=='[') tmp *= 3;
            s.push(str[i]);
        }
        else if(str[i]==')')
        {
            if(s.empty() || s.top() == '[')
            {
                answer = 0;
                break;
            }
            if(str[i-1]=='(')
            {
                answer += tmp;
            }
            tmp /= 2;
            s.pop();
        }
        else if(str[i]==']')
        {
            if(s.empty() || s.top() == '(')
            {
                answer = 0;
                break;
            }
            if(str[i-1]=='[')
            {
                answer += tmp;
            }
            tmp /= 3;
            s.pop();
        } 
    } 
    if(!s.empty()) answer = 0;

    cout << answer << '\n';

   return 0;
}