//가장 가까운 공통 조상 https://www.acmicpc.net/problem/3584
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);


    int tree[10001];
    bool visited[10001];

    int T;
    cin >> T;
    while(T--)
    {
        int N, A, B;
        fill_n(tree, 10001, -1);
        fill_n(visited, 10001, false);
        cin >> N;
        for(int i=1; i<N; ++i)
        {
            cin >> A >> B;
            tree[B] = A;
        }

        int c1, c2;
        cin >> c1 >> c2;

        while(c1!=-1)
        {
            visited[c1] = true;
            c1 = tree[c1];
        }
        while(c2!=-1)
        {
            if(visited[c2])
            {
                cout << c2 << '\n';
                break;
            }
            c2 = tree[c2];
        }
    }
    return 0;
}
