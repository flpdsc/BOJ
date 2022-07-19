//숫자 야구 https://www.acmicpc.net/problem/2503
#include <iostream>
#include <string>
using namespace std;

bool numbers[1000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, res=0;
    
    //초기화
    for(int i=123; i<1000; ++i)
    {
        string tmp = to_string(i);
        if(tmp[0]==tmp[1] || tmp[1]==tmp[2] || tmp[2]==tmp[0] || tmp[0]=='0' || tmp[1]=='0' || tmp[2]=='0')
        {
            continue;
        }
        numbers[i] = true;
    }

    cin >> n;
    for(int i=0; i<n; ++i)
    {
        string num;
        int s, b;
        cin >> num >> s >> b;
        for(int i=123; i<1000; ++i)
        {
            if(numbers[i])
            {
                string tmp = to_string(i);
                int strike=0, ball=0;
                for(int j=0; j<3; ++j)
                {
                    for(int k=0; k<3; ++k)
                    {
                        if(num[j]==tmp[k])
                        {
                            if(j==k) ++strike;
                            else ++ball;
                        }
                    }
                }
                if(strike!=s || ball!=b)
                {
                    numbers[i] = false;
                }
            }
        }
    }

    for(int i=123; i<1000; ++i)
    {
        if(numbers[i])
        {
            ++res;
        }
    }
    cout << res << '\n';
    return 0;
}