//크로아티아 알파벳 https://www.acmicpc.net/problem/2941
#include <iostream>
using namespace std;
int main()
{
    string str;
    int res=0;
    cin >> str;

    if(str[0]!='-' && str[0]!='=') res++;
    for(int i=1; i<str.size(); ++i){
        if(str[i]=='-' || str[i]=='=') continue;
        if(str[i]=='j' && (str[i-1]=='l' || str[i-1]=='n')) continue;
        if(str[i]=='z' && str[i-1]=='d' && str[i+1]=='=') continue;
        res++;
    }
    cout << res << '\n';
    return 0;
}