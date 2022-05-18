//적록색약 https://www.acmicpc.net/problem/10026
#include <iostream>
#include <queue>
using namespace std;

int n;
string map[100];
bool visited[100][100];
int dr[4] = {0, -1, 0, 1}, dc[4] = {1, 0, -1, 0};

int BFS(char c1, char c2)
{
    fill(&visited[0][0], &visited[n-1][n], false);
    queue<pair<int, int> > q;
    int cnt=0;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            if((map[i][j]==c1 || map[i][j]==c2) && !visited[i][j])
            {
                q.push(make_pair(i, j));
                visited[i][j] = true;
                while(!q.empty())
                {
                    int r = q.front().first;
                    int c = q.front().second;
                    q.pop();
                    for(int k=0; k<4; ++k)
                    {
                        int rr = r+dr[k];
                        int cc = c+dc[k];
                        if(rr>=0 && cc>=0 && rr<n && cc<n)
                        {
                        	if((map[rr][cc]==c1 || map[rr][cc]==c2) && !visited[rr][cc])
                            {
                            	visited[rr][cc] = true;
	                            q.push(make_pair(rr, cc));
                            }                            
                        }
                    }
                }
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        cin >> map[i];
    }
    cout << BFS('R', 'R') + BFS('G', 'G') + BFS('B', 'B') << ' ';
    cout << BFS('R', 'G') + BFS('B', 'B') << '\n';

    return 0;
}