//덱 https://www.acmicpc.net/problem/10866
#include <iostream>
using namespace std;
int deque[10000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, front=0, back=0;
    cin >> n;
    for (int i=0; i<n; ++i){
        string cmd;
        int data;
        cin >> cmd;
        if(cmd=="push_front"){
            cin >> data;
            if(front==back){
                if(back==n-1) back = 0;
                else back++;
            }
            if(front==0){
                deque[front] = data;
                front = n-1;
            }
            else deque[front--] = data;

        }
        else if(cmd=="push_back"){
            cin >> data;
            if(back==front){
                if(front==0) front = n-1;
                else front--;
            }
            if(back==n-1) back = -1;
            deque[back++] = data;
        }
        else if(cmd=="pop_front"){
            if(front==0 && back==0) cout << -1 << endl;
            else{
                if(front==back-1 || front-back==n-1) cout << -1 << endl;
                else{
                    if(front==n-1) front = -1;
                    cout << deque[++front] << endl;
                }
            }
        }
        else if(cmd=="pop_back"){
            if(front==0 && back==0) cout << -1 << endl;
            else{
                if(front==back-1 || front-back==n-1) cout << -1 << endl;
                else{
                    if(back==0) back = n;
                    cout << deque[--back] << endl;               
                } 
            }
        }
        else if(cmd=="size"){
            if(front>back) cout << n-front+back-1 << endl;
            else if(front==back) cout << 0 << endl;
            else cout << back-front-1 << endl;
        }
        else if(cmd=="empty"){
            if(front==back || back-front==1 || front-back==n-1) cout << 1 << endl;
            else cout << 0 << endl;   
        }
        else if(cmd=="front"){
            if(front==back || front==back-1) cout << -1 << endl;
            else{
                if(front==n-1) cout << deque[0] << endl;
                else cout << deque[front+1] << endl;
            }
        }
        else if(cmd=="back"){
            if(front==back || front==back-1) cout << -1 << endl;
            else cout << deque[back-1] << endl;
        }
        cout << "front : " << front << endl;
        cout << "back : " << back << endl;
        cout << endl;
    }
    return 0;
}