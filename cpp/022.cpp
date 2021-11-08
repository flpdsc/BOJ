//AC https://www.acmicpc.net/problem/5430
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;

    for(int i=0; i<t; ++i){

        string p, input;
        int n, tmp=0;
        deque<int> dq;

        cin >> p >> n >> input;

        // dq에 저장
        for(int j=0; j<input.size(); ++j){
            if(input[j]>='0' && input[j]<='9'){
                if(tmp!=0) tmp *= 10;
                tmp += input[j]-48;
            }
            else if(input[j]==',' || input[j]==']'){
                if(tmp!=0){
                    dq.push_back(tmp);
                    tmp = 0;
                }
            }
        }

        // 함수 수행
        bool flag = true; // 정방향(t), 역방향(f)
        bool error = false;
        for(int j=0; j<p.size(); ++j){
            if(p[j]=='R'){
                flag = !flag; // 방향변경
            }
            else if(p[j]=='D'){
                if(dq.empty()){ // 에러
                    error = true;
                    break;
                }
                else{
                    if(flag) dq.pop_front();
                    else dq.pop_back();
                }
            }
        }

        // 출력
        if(error) cout << "error" << endl;
        else{
            cout << "[";
            // 정방향 출력
            if(flag){
                while(!dq.empty()){
                    cout << dq.front();
                    dq.pop_front();
                    if(!dq.empty()) cout << ",";
                }
            }
            // 역방향 출력
            else{
                while(!dq.empty()){
                    cout << dq.back();
                    dq.pop_back();
                    if(!dq.empty()) cout << ",";
                }
            }
            cout << "]" << endl;
        }
    }
    return 0;
}