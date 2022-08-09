//풍선 터뜨리기 https://www.acmicpc.net/problem/2346
#include <iostream>
#include <deque>
using namespace std;

int dir[1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    deque<int> dq;
    cin >> n;
    for(int i=1; i<=n; ++i){
        cin >> dir[i];
        dq.push_back(i);
    }

    int next = dir[dq.front()];
    cout << dq.front() << ' ';
    dq.pop_front();
    while(!dq.empty()){
        if(next>0){
            while(next--){
                dq.push_back(dq.front());
                dq.pop_front();
            }
            cout << dq.back() << ' ';
            next = dir[dq.back()];
            dq.pop_back();
        }
        else{
            while(next++){
                dq.push_front(dq.back());
                dq.pop_back();
            }
            cout << dq.front() << ' ';
            next = dir[dq.front()];
            dq.pop_front();
        }
    }
    
    return 0;
}