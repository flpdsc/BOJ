//분수찾기 https://www.acmicpc.net/problem/1193
#include <iostream>
using namespace std;

int n;

int Sum(int num)
{
    int s_num = num;

    while(1)
    {
        if(s_num>=n) break;
        num += 4;
        s_num += num;
    }

    int idx = s_num-n+1;
    int m = num/2+1;

    if(idx<=m) return idx;
    else return 2*m-idx;
}
int main()
{
    cin >> n;
    cout << Sum(1) << '/' << Sum(3) << '\n';
    return 0;
}