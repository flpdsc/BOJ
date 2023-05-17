//색종이 https://www.acmicpc.net/problem/2563
#include <iostream>
using namespace std;

bool paper[100][100];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, answer=0;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        int x, y;
        cin >> x >> y;
        for(int j=0; j<10; ++j)
        {
            for(int k=0; k<10; ++k)
            {
                if(paper[x+j][y+k]) continue;
                ++answer;
                paper[x+j][y+k] = true;
            }
        }
    }
    cout << answer << '\n';
    return 0;
}