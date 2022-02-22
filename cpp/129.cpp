//신나는 함수 실행 https://www.acmicpc.net/problem/9184
#include <iostream>
using namespace std;

int a, b, c;
int cache[21][21][21];

int w(int x, int y, int z)
{
    if(x<=0 || y<=0 || z<=0) return 1;
    if(x>20 || y>20 || z>20) return w(20, 20, 20);
    if(cache[x][y][z]) return cache[x][y][z];
    if(x<y && y<z){
        cache[x][y][z] = w(x, y, z-1)+w(x, y-1, z-1)-w(x, y-1, z);
        return cache[x][y][z];
    }
    cache[x][y][z] = w(x-1, y, z)+w(x-1, y-1, z)+w(x-1, y, z-1)-w(x-1, y-1, z-1);
    return cache[x][y][z];
}

int main()
{       
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    while(1){
        cin >> a >> b >> c;
        if(a==-1 && b==-1 && c==-1) break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n"; 
    }
    return 0;
}