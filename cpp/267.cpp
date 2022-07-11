//빙고 https://www.acmicpc.net/problem/2578
#include <iostream>
using namespace std;

int bingo[5][5];

int Check(int r, int c)
{
    int b[4] = {0, 0, 0, 0};
    int res=0;

    for(int i=0; i<5; ++i)
    {
        if(bingo[r][i]==-1)
        {
            ++b[0];
        }
        if(bingo[i][c]==-1)
        {
            ++b[1];
        }
    }

    if(r==c)
    {
        for(int i=0; i<5; ++i)
        {
            if(bingo[i][i]==-1)
            {
                ++b[2];
            }
        }
    }
    if(r+c==4)
    {
        for(int i=0; i<5; ++i)
        {
            if(bingo[i][4-i]==-1)
            {
                ++b[3];
            }
        }
    }

    for(int i=0; i<4; ++i)
    {
        if(b[i]==5)
        {
            ++res;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int b=0;

    for(int i=0; i<5; ++i)
    {
        for(int j=0; j<5; ++j)
        {
            cin >> bingo[i][j];
        }
    }

    int n=1;
    while(n<=25)
    {
        int num;
        cin >> num;
        for(int i=0; i<5; ++i)
        {
            for(int j=0; j<5; ++j)
            {
                if(bingo[i][j]==num)
                {
                    bingo[i][j] = -1;
                    b += Check(i, j);
                    if(b>=3)
                    {
                        cout << n << '\n';
                        return 0;
                    }
                }
            }
        }
        ++n;
    }
    return 0;
}