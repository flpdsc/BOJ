//연산자 끼워넣기 https://www.acmicpc.net/problem/14888
#include <iostream>
#define MAX 2147000000
using namespace std;

int n;
int max_res=-MAX, min_res=MAX;
int operands[11], operators[4];

void Cal(int res, int idx)
{
    if(idx==n){
        max_res = max(max_res, res);
        min_res = min(min_res, res);
        return;
    }
    for(int i=0; i<4; ++i){
        if(operators[i]>0){
            operators[i]--;
            if(i==0) Cal(res+operands[idx], idx+1);
            else if(i==1) Cal(res-operands[idx], idx+1);
            else if(i==2) Cal(res*operands[idx], idx+1);
            else Cal(res/operands[idx], idx+1);
            operators[i]++;
        }
    }
    return;
}

int main()
{
    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> operands[i];

    for(int i=0; i<4; ++i)
        cin >> operators[i]; // +, -, *, /

    Cal(operands[0], 1);

    cout << max_res << '\n' << min_res << '\n';
    return 0;
}
