//하노이 탑 이동 순서 https://www.acmicpc.net/problem/11729
#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int> > mv;

void Hanoi(int n, int src, int wp, int dst)
{
    if(n==1){
        mv.push_back(make_pair(src, dst));
        return;
    }
    Hanoi(n-1, src, dst, wp);
    mv.push_back(make_pair(src, dst));
    Hanoi(n-1, wp, src, dst);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    Hanoi(n, 1, 2, 3);
    cout << mv.size() << '\n';
    for(int i=0; i<mv.size(); ++i)
        cout << mv[i].first << ' ' << mv[i].second << '\n';
    return 0;
}
