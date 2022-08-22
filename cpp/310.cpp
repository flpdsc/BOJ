//백대열 https://www.acmicpc.net/problem/14490
#include <iostream>
using namespace std;

int GCD(int x, int y){
    if(x%y==0) return y;
    return GCD(y, x%y); 
}

int main()
{
    string str, tmp;
    cin >> str;

    int cur = str.find(':');
    tmp=str.substr(0, cur);
    int a=stoi(tmp);
    tmp=str.substr(cur+1, str.size());
    int b=stoi(tmp);

    int d = GCD(a, b);
    cout << a/d << ':' << b/d << '\n';

    return 0;
}