//Z https://www.acmicpc.net/problem/1074
#include <iostream>
#include <cmath>
using namespace std;

void Sol(int num, int res, int row, int col)
{
    if(num==-1){
        cout << res << '\n';
        return;
    }
    int mid = pow(2, num);
    int start=0;
    if(row<mid){
        if(col<mid){ //1사분면
            res += 0;
            Sol(num-1, res, row, col);
        }
        else{ //2사분면
            res += mid*mid;
            Sol(num-1, res, row, col-mid);
        }
    }
    else{
        if(col<mid){ //3사분면
            res += mid*mid*2;
            Sol(num-1, res, row-mid, col);
        }
        else{ //4사분면
            res += mid*mid*3;
            Sol(num-1, res, row-mid, col-mid);
        }
    }
}

int main()
{
    int N, r, c;
    cin >> N >> r >> c;
    Sol(N-1, 0, r, c);
    return 0;
}
