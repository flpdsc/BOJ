//잃어버린 괄호 https://www.acmicpc.net/problem/1541
#include <iostream>
using namespace std;

int main()
{
    string inp;
    cin >> inp;

    bool isMinus=false;
    int num=0, sum=0;

    for(int i=0; i<=inp.size(); ++i){
        if(inp[i]=='+' || inp[i]=='-' || i==inp.size()){
            if(isMinus) sum -= num;
            else sum += num;
            num = 0;
            if(inp[i]=='-') isMinus = true;
        }
        else{
            num *= 10;
            num += inp[i]-'0';
        }
    }
    cout << sum << '\n';
    return 0;
}
