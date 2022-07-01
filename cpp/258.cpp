//후위 표기식2 https://www.acmicpc.net/problem/1935
#include <iostream>
#include <stack>
using namespace std;

double operand[26];

int main()
{
    int n;
    cin >> n;
    string postfix;
    cin >> postfix;
    for(int i=0; i<n; ++i)
    {
        cin >> operand[i];
    }

    stack<double> s;
    for(int i=0; i<postfix.size(); ++i)
    {
        if(postfix[i]>='A' && postfix[i]<='Z')
        {
            int idx = postfix[i]-'A';
            s.push(operand[idx]);
            continue;
        }

        double y = s.top();
        s.pop();
        double x = s.top();
        s.pop();

        if(postfix[i]=='+')
        {
            s.push(x+y);
        }
        else if(postfix[i]=='-')
        {
            s.push(x-y);
        }
        else if(postfix[i]=='*')
        {
            s.push(x*y);
        }
        else if(postfix[i]=='/')
        {
            s.push(x/y);
        }
    }

    //소숫점 출력 범위
    cout << fixed;
    cout.precision(2);
    cout << s.top() << '\n';
    return 0;
}