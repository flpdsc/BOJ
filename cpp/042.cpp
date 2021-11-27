//숨바꼭질 https://www.acmicpc.net/problem/1697
#include <iostream>
#include <queue>
#define MAX 100001
using namespace std;

bool ch[MAX];

int main()
{
    int n, k;
    queue<pair<int, int> > loc;

    cin >> n >> k;

    loc.push(make_pair(n, 0));
    ch[n] = true;

    while(!loc.empty()){
        int curLoc = loc.front().first;
        int curSec = loc.front().second;
        loc.pop();

        if(curLoc==k){
            cout << curSec << '\n';
            break;
        }
        if(curLoc+1<=MAX && !ch[curLoc+1]){
            loc.push(make_pair(curLoc+1, curSec+1));
            ch[curLoc+1] = true;
        }
        if(curLoc-1>=0 && !ch[curLoc-1]){
            loc.push(make_pair(curLoc-1, curSec+1));
            ch[curLoc-1] = true;
        }
        if(curLoc*2<=MAX && !ch[curLoc*2]){
            loc.push(make_pair(curLoc*2, curSec+1));
            ch[curLoc*2] = true;
        }
    }
    return 0;
}
