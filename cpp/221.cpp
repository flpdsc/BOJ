//뒤집기 https://www.acmicpc.net/problem/1439
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int num0=0, num1=0;
    int end = s.size()-1;

    for(int i=1; i<=end; ++i)
    {
        if(s[i]!=s[i-1])
        {
            if(s[i-1]=='1') num1++;
            else num0++;
        } 
    }
    
    if(s[end]=='1') num1++;
    else num0++;

    cout << min(num0, num1) << '\n';
    return 0;
}