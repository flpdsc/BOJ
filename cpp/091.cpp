//물통 https://www.acmicpc.net/problem/2251
#include <iostream>
#include <queue>
using namespace std;
const int MAX = 200;

int A, B, C;
bool ch[MAX+1][MAX+1], res[MAX+1];

struct Water
{
	int a, b, c;
	Water(int x, int y, int z){
		a = x, b = y, c = z;
	}
};

void BFS(void)
{
	queue<Water> q;
	q.push(Water(0, 0, C));
	
	while(!q.empty()){
		Water now = q.front();
		q.pop();
		if(ch[now.a][now.b]) continue;
		ch[now.a][now.b] = true;
		if(now.a==0) res[now.c] = true;
		
		// A->B
		if(now.a+now.b>B) q.push(Water(now.a+now.b-B, B, now.c));
		else q.push(Water(0, now.a+now.b, now.c));
		// A->C
		if(now.a+now.c>C) q.push(Water(now.a+now.c-C, now.b, C));
		else q.push(Water(0, now.b, now.a+now.c));
		// B->A
		if(now.b+now.a>A) q.push(Water(A, now.a+now.b-A, now.c));
		else q.push(Water(now.a+now.b, 0, now.c));
		// B->C
		if(now.b+now.c>C) q.push(Water(now.a, now.a+now.c-C, C));
		else q.push(Water(now.a, 0, now.b+now.c));
		// C->A
		if(now.c+now.a>A) q.push(Water(A, now.b, now.c+now.a-A));
		else q.push(Water(now.a+now.c, now.b, 0));
		// C->B
		if(now.c+now.b>B) q.push(Water(now.a, B, now.c+now.b-B));
		else q.push(Water(now.a, now.c+now.b, 0));
	}
}

int main()
{
	cin >> A >> B >> C; // 8 9 10
	BFS();
	for(int i=0; i<=C; ++i)
		if(res[i]) cout << i << ' ';
	cout << '\n';
	return 0;
}