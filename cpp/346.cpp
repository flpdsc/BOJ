//알고리즘 수업 - 점근적 표기 1 https://www.acmicpc.net/problem/24313
#include <iostream>
using namespace std;

int main()
{
    int a_1, a_0, c, n_0;
    cin >> a_1 >> a_0 >> c >> n_0;

    for(int i=n_0; i<=100; ++i)
    {
        if(a_1*i+a_0 > c*i) 
        {
            cout << "0\n";
            return 0;
        }
    }
    cout << "1\n";

    return 0;
}