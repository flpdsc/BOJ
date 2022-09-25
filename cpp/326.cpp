//비밀번호 발음하기 https://www.acmicpc.net/problem/4659
#include <iostream>
using namespace std;

const char vow[5] = {'a', 'e', 'i', 'o', 'u'};

int main()
{
    string str="";
    while(1)
    {
        str.clear();
        cin >> str;

        if(str=="end") break;

        bool isAcceptable=false;
        char pre=' ';
        int v=0, c=0;
        
        for(int i=0; i<str.length(); ++i)
        {
            bool isV=false;
            for(int j=0; j<5; ++j)
            {
                if(str[i]==vow[j])
                {
                    isAcceptable=true;
                    isV = true;
                    ++v;
                    c=0;
                }
            }
            if(!isV)
            {
                ++c;
                v=0;
            }
            if(v>2 || c>2)
            {
                isAcceptable = false;
                break;
            }
            if(pre==str[i] && pre!='e' && pre!='o')
            {
                isAcceptable = false;
                break;
            }
            pre = str[i];
        }
        cout << "<" << str << "> is ";
        if(!isAcceptable) cout << "not ";
        cout << "acceptable.\n";
    }
    return 0;
}