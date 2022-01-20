//∞Ê¿Ô¿˚ ¿¸ø∞ https://www.acmicpc.net/problem/18405
#include <iostream>
#include <queue>
using namespace std;

const int MAX = 201;
int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };

int n, k, s, x, y;
int map[MAX][MAX];

struct Virus {
	int row, col, vir;
	Virus(int a, int b, int c) {
		row = a;
		col = b;
		vir = c;
	}
	bool operator<(const Virus& b)const {
		return vir > b.vir;
	}
};

void BFS()
{
	priority_queue<Virus> pq;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (map[i][j] != 0) {
				pq.push(Virus(i, j, map[i][j]));
			}
		}
	}

	while (!pq.empty()) {
		Virus tmp = pq.top();
		pq.pop();
		for (int i = 0; i < 4; ++i) {
			int xx = tmp.row + dx[i];
			int yy = tmp.col + dy[i];
			int virus = tmp.vir;
			if (xx > 0 && yy > 0 && xx <= n && yy <= n && map[xx][yy]==0) {
				map[xx][yy] = virus;
			}
		}
	}
}

int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> map[i][j];
		}
	}
	cin >> s >> x >> y;

	while (s--) {
		BFS();
		if (map[x][y] != 0) break;
	}

	cout << map[x][y] << '\n';
	return 0;
}