//문자 해독 https://www.acmicpc.net/problem/1593
#include <iostream>
using namespace std;

int wCnt[57], sCnt[57];

int Check()
{
    for(int i=0; i<57; ++i)
    {
        if(wCnt[i]!=sCnt[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int g, s, cnt=0;
    string wrd, str; 
    cin >> g >> s >> wrd >> str;

    for(int i=0; i<g; ++i)
    {
        wCnt[wrd[i]-'A']++;
        sCnt[str[i]-'A']++;
    }
    cnt += Check();

    for(int i=0; i<s-g; ++i)
    {
        sCnt[str[i]-'A']--;
        sCnt[str[i+g]-'A']++;
        cnt += Check();
    }
    
    cout << cnt << '\n';
    return 0;
}
