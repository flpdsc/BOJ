//가운데를 말해요 https://www.acmicpc.net/problem/1655
#include <cstdio>
#include <queue>
using namespace std;
int main()
{
    int n, tmp;
    scanf("%d", &n);
    priority_queue<int, vector<int>, less<>> max_h;
    priority_queue<int, vector<int>, greater<>> min_h;

    for(int i=0; i<n; ++i){
        scanf("%d", &tmp);

        if(max_h.size() - min_h.size()==0) max_h.push(tmp);
        else min_h.push(tmp);

        if(!max_h.empty() && !min_h.empty() && max_h.top()>min_h.top()){
            int a = max_h.top();
            int b = min_h.top();
            max_h.pop();
            min_h.pop();
            max_h.push(b);
            min_h.push(a);
        }

        printf("%d\n", max_h.top());
    }
    
    return 0;
}