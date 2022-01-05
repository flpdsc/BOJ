//숫자의 신 https://www.acmicpc.net/problem/1422
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> c;

bool cmp(string x, string y)
{
    if(x+y>y+x) return true;
    else return false;
}

int main()
{
    int k, n;
    string b="";
    cin >> k >> n;
    for(int i=0; i<k; ++i){
        string a;
        cin >> a;
        c.push_back(a);
        if(b.size()<a.size() || (b.size()==a.size() && b<a))
        //1.숫자 길이가 크거나 2.숫자 길이가 같으면 앞자리가 큰 수
            b = a;
    }
    for(int i=0; i<n-k; ++i)
        c.push_back(b);

    sort(c.begin(), c.end(), cmp);

    for(int i=0; i<n; ++i)
        cout << c[i];
    cout << '\n';
    return 0;
}