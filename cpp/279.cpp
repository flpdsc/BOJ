//반복수열 https://www.acmicpc.net/problem/2331
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> v;
int main()
{
    int a, p;
    cin >> a >> p;
    v.push_back(a);
    int num = a;
    while(1)
    {
        int res=0;
        while(num)
        {
            res += pow(num%10, p);
            num /= 10;
        }
        for(int i=0; i<v.size(); ++i)
        {
            if(res==v[i])
            {
                cout << i << '\n';
                return 0;
            }
        }
        v.push_back(res);
        num = res;
    }
    return 0;
}