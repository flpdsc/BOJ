//그룹 단어 체커 https://www.acmicpc.net/problem/1316
#include <iostream>
using namespace std;


bool checker(string str)
{
    bool ch[26] = {false, };
    for(int i=0; i<str.size(); ++i){
        if(!ch[str[i]-97]) ch[str[i]-97] = true;
        else{
            if(str[i-1]!=str[i]) return false;
        }
    }
    return true;
}

int main()
{
    int n, res=0;
    cin >> n;
    while(n--){
        string input;
        cin >> input;
        if(checker(input)) res++;
    }
    cout << res << '\n';
    return 0;
}