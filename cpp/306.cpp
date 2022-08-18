//UCPC는 무엇의 약자일까? https://www.acmicpc.net/problem/15904
#include <iostream>
using namespace std;
int main()
{
    string UCPC="UCPC";
    string str;
    getline(cin, str); //공백입력
    int p=0;
    for(int i=0; i<str.size(); ++i)
        if(str[i]==UCPC[p]) ++p;

    if(p==4) cout << "I love UCPC" << '\n';
    else cout << "I hate UCPC" << '\n';
    
    return 0;
}