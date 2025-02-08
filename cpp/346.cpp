//알고리즘 수업 - 점근적 표기 1 https://www.acmicpc.net/problem/24313
#include <iostream>
using namespace std;

int main()
{
    int a_1, a_0, c, n_0;
    cin >> a_1 >> a_0 >> c >> n_0;

    if(a_1*n_0+a_0<=c*n_0 && c>=a_1) cout << "1\n";
    else cout << "0\n";
    
    return 0;
}