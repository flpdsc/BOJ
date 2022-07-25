//참외밭 https://www.acmicpc.net/problem/2477
#include <iostream>
using namespace std;

bool check[5];
pair<int, int> sides[6];

int main()
{
    int k;
    cin >> k;
    for(int i=0; i<6; ++i)
    {
        int d, l;
        cin >> d >> l;
        sides[i] = make_pair(d, l);
        if(!check[d])
        {
            check[d] = true;
        }
        else
        {
            check[d] = false;
        }
    }
    //방향이 중복되지 않았다면 check가 true

    int s;
    for(int i=0; i<6; ++i)
    {
        //연속적으로 중복되지 않은 곳 찾기
        if(check[sides[i%6].first] && check[sides[(i+1)%6].first])
        {
            //그 다음이 시작점
            s = (i+2)%6;
            break;
        }
    }

    int len[4];
    for(int i=0; i<4; ++i)
    {
        len[i] = sides[(s+i)%6].second;
    }

    int big = (len[0]+len[2])*(len[1]+len[3]);
    int small = len[1]*len[2];

    cout << (big-small)*k << '\n';

    return 0;
}