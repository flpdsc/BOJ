//최대 힙  https://www.acmicpc.net/problem/11279
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    priority_queue<int> pq;
    cin >> n;
    for(int i=0; i<n; ++i){
        int input;
        cin >> input;
        if(input==0){
            if(pq.empty()) cout << "0\n";
            else{
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else pq.push(input);
    }
    return 0;
}