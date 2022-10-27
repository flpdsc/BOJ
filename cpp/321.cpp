//나머지 https://www.acmicpc.net/problem/3052
#include <iostream>
using namespace std;

bool check[42];

int main()
{
    int cnt=0;

    for(int i=0; i<10; ++i)
    {
        int input;
        cin >> input;
        check[input%42] = true;
    }
    for(int i=0; i<42; ++i)
    {
        if(check[i]) ++cnt;
    }
    cout << cnt << '\n';
    return 0;
}