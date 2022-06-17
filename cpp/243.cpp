//단어 뒤집기 2 https://www.acmicpc.net/problem/17413
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;
    getline(cin, str); //공백 포함한 문자열 입력받기
    // char str[100000];
    // cin.getline(str, 100000, '\n');
    stack<char> s;
    int i=0;
    while(1)
    {
        if(str[i]>='0' && str[i]<='9' || str[i]>='a' && str[i]<='z')
        {
            s.push(str[i++]);
            continue;
        }
        while(!s.empty())
        {
            cout << s.top();
            s.pop();
        }
        if(str[i]=='\0')
        {
            break;
        }
        if(str[i]=='<')
        {
            while(str[i]!='>')
            {
                cout << str[i++];
            }
        }
        cout << str[i++];
    }
    return 0;
}