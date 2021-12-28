//최소 힙 https://www.acmicpc.net/problem/1927
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    priority_queue<int> pq;
    // priority_queue<int, vector<int>, greater<>> pq;

    cin >> n;

    for(int i=0; i<n; ++i){
        int input;
        cin >> input;
        if(input==0){
            if(!pq.empty()){
                cout << -pq.top() << '\n';
                // cout << pq.top() << '\n';
                pq.pop();
            }
            else cout << "0\n";
        }
        else pq.push(-input);
        // else pq.push(input);
    }

    return 0;
}