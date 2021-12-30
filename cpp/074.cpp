//절댓값 힙 https://www.acmicpc.net/problem/11286
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    priority_queue<int> pos, neg;
    cin >> n;

    for(int i=0; i<n; ++i){
        int inp;
        cin >> inp;
        if(inp>0) pos.push(-inp);
        if(inp<0) neg.push(inp);
        if(inp==0){
            if(pos.empty()&&neg.empty()) cout << "0\n";
            else{
                if(pos.empty()){
                    cout << neg.top() << '\n';
                    neg.pop();
                }
                else if(neg.empty()){
                    cout << -pos.top() << '\n';
                    pos.pop();
                }
                else if(pos.top()<=neg.top()){
                    cout << neg.top() << '\n';
                    neg.pop();
                }
                else if(pos.top()>neg.top()){
                    cout << -pos.top() << '\n';
                    pos.pop();
                }
            }
        }
    }
    return 0;
}