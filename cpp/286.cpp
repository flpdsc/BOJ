//피보나치 수 4 https://www.acmicpc.net/problem/10826
#include <iostream>
#include <algorithm>
using namespace std;

string Add(string x, string y)
{
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());

    int num, carry = 0;
    string res="";

    for(int i=0; i<x.size(); ++i)
    {
        num = (x[i]-'0' + y[i]-'0' + carry)%10;
        carry = (x[i]-'0' + y[i]-'0' + carry)/10;
        res += to_string(num);
    }
    for(int i=x.size(); i<y.size(); ++i)
    {
        num = (y[i]-'0' + carry)%10;
        carry = (y[i]-'0' + carry)/10;
        res += to_string(num);
    }
    if(carry!=0) res += to_string(carry);
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    int n;
    cin >> n;
    
    if(n==0)
    {
        cout << "0\n";
        return 0;
    }

    string a="1", b="1", res="1";
    for(int i=3; i<=n; ++i)
    {
        res = Add(a, b);
        a = b;
        b = res;
    }
    cout << res << '\n';
    return 0;
}