//회전하는 큐 https://www.acmicpc.net/problem/1021
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int n, m, cnt=0;
    cin >> n >> m;

    deque<int> dq;
    for(int i=1; i<=n; ++i){
        dq.push_back(i);
    }

    while(m--){
        int num;
        cin >> num;
        int idx;
        for(int i=0; i<dq.size(); ++i){
            if(dq[i]==num){
                idx = i;
                break;
            }
        }
        if(idx<dq.size()-idx){
            while(1){
                if(num==dq.front()){
                    dq.pop_front();
                    break;
                }
                else{
                    dq.push_back(dq.front());
                    dq.pop_front();
                    cnt++;

                }
            }
        }
        else{
            while(1){
                if(num==dq.front()){
                    dq.pop_front();
                    break;
                }
                else{
                    dq.push_front(dq.back());
                    dq.pop_back();
                    cnt++;
                }
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}

