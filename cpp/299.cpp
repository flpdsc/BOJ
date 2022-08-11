//폴리오미노 https://www.acmicpc.net/problem/1343
#include <iostream>
using namespace std;

string A="AAAA", B="BB", dot=".", res="";

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;
    cin >> str;

    int len=0;
    for(int i=0; i<=str.size(); ++i)
    {
        if(str[i]=='X'){
            ++len;
        }
        else{
            if(len%2==0){
                for(int j=0; j<len/4; ++j){
                    res += A;
                }
                if(len%4) res += B;
                if(str[i]=='.') res += dot;
                len = 0;
            }
            else{
                cout << "-1\n";
                return 0;
            }
        }
    }
    cout << res << '\n';
    return 0;
}