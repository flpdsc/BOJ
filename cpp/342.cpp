//직사각형 네개의 합집합의 면적 구하기 https://www.acmicpc.net/problem/2669
#include <iostream>
using namespace std;

bool arr[100][100];

int main()
{
    int x1, y1, x2, y2, res=0;
    for(int i=0; i<4; ++i)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i=x1; i<x2; ++i)
        {
            for(int j=y1; j<y2; ++j)
            {
                if(arr[i][j]) continue;
                ++res;
                arr[i][j] = true;
            }
        }
    }
    cout << res << '\n';
    return 0;
}