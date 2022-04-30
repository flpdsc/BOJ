//쉽게 푸는 문제 https://www.acmicpc.net/problem/1292
#include <iostream>
using namespace std;

int sum[1001];

int main()
{
    int a, b;
    cin >> a >> b;

    int num=0, idx=0;
    while(1)
    {
        num++;
        for(int i=0; i<num; ++i)
        {
            idx++;
            if(idx>b) break;
            sum[idx] = sum[idx-1]+num;
        }
        if(idx>b) break;
    }
    cout << sum[b]-sum[a-1] << '\n';

    return 0;
}