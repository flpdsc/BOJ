//집합 https://www.acmicpc.net/problem/11723
#include <iostream>
using namespace std;

bool S[21];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int M;
    cin >> M;
    while(M--)
    {
        string cmd;
        int num;
        cin >> cmd; 
        if(cmd=="all")
        {
            for(int i=1; i<=20; ++i) S[i] = true;
        }
        else if(cmd=="empty")
        {
            for(int i=1; i<=20; ++i) S[i] = false;
        }
        else
        {
            cin >> num;
            if(cmd=="check")
            {
                cout << S[num] << '\n';
            }
            else if(cmd=="add")
            {
                S[num] = true;
            }
            else if(cmd=="remove")
            {
                S[num] = false;
            }
            else
            {
                if(S[num]) S[num] = false;
                else S[num] = true;
            }
        }
    }
    return 0;
}