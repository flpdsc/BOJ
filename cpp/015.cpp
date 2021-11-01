//좌표 정렬하기2 https://www.acmicpc.net/problem/11651
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
        if(y==bb.y) return x<bb.x;
        else return y<bb.y;        
    };
};

int main()
{
    int n;
    vector<Point> vec;
    scanf("%d", &n);
    for(int i=0; i<n; ++i){
        int x, y;
        scanf("%d %d", &x, &y);
        vec.push_back(Point(x, y));
    }
    sort(vec.begin(), vec.end());
    for(int i=0; i<n; ++i) printf("%d %d\n", vec[i].x, vec[i].y);
    return 0;
}