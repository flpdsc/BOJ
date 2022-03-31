//쇠막대기 https://www.acmicpc.net/problem/10799
#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int cnt=0, res=0;
    for(int i=0; i<str.size(); ++i){
        if(str[i]=='(') cnt++;
        else{
            cnt--;
            if(str[i-1]=='(') res += cnt;
            else res++;
        }
    }
    cout << res << '\n';
    return 0;
}