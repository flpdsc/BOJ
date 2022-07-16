//스위치 켜고 끄기 https://www.acmicpc.net/problem/1244
#include <iostream>
using namespace std;

int sw, st;
bool switches[101];

void Action(int s, int n)
{
    if(s==1) //남학생이면, 배수 스위치 변경
    {
        int nn = n;
        while(nn<=sw)
        {
            switches[nn] = !switches[nn];
            nn += n;
        }
    }
    else if(s==2) //여학생이면, 좌우대칭이면 변경
    {
        switches[n] = !switches[n];
        int nn = n-1;
        n = n+1;
        while(nn>0 && n<=sw)
        {
            if(switches[nn]!=switches[n])
            {
                break;
            }
            switches[nn] = !switches[nn];
            switches[n] = !switches[n];
            --nn; ++n;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> sw;
    for(int i=1; i<=sw; ++i)
    {
        cin >> switches[i];
    }
    cin >> st;
    for(int i=1; i<=st; ++i)
    {
        int s, n;
        cin >> s >> n;
        Action(s, n);  
    }

    for(int i=1; i<=sw; ++i)
    {
        cout << switches[i] << ' ';
        if(i%20==0)
        {
            cout << '\n';
        }
    }
    return 0;
}