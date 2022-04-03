//균형잡힌 세상 https://www.acmicpc.net/problem/4949
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    while(1)
    {
        stack<char> st;
        string str;
        getline(cin, str);
        if(str==".") break;
        string res="yes";
        for(int i=0; i<str.size(); ++i){
            if(str[i]=='(') st.push('(');
            else if(str[i]=='[') st.push('[');
            else if(str[i]==')'){
                if(st.empty() || st.top()=='['){
                    res = "no";
                    break;
                } 
                st.pop();
            }
            else if(str[i]==']'){
                if(st.empty() || st.top()=='('){
                    res = "no";
                    break;
                } 
                st.pop();
            }
        }
        if(!st.empty()) res = "no";
        cout << res << '\n';
    }
    return 0;
}
