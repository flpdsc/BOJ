//좌표 정렬하기 https://www.acmicpc.net/problem/11650
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct Point{
    int x, y;
    Point(int a, int b){
        x = a;
        y = b;
    }
    bool operator<(const Point &bb)const{
        if(x==bb.x) return y<bb.y;
        else return x<bb.x;
    }
};

int main()
{
    int n;
    vector<Point> a;
    scanf("%d", &n);
    for(int i=0; i<n; ++i){
        int x, y;
        scanf("%d %d", &x, &y);
        a.push_back(Point(x, y));
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; ++i) printf("%d %d\n", a[i].x, a[i].y);
    return 0;
}