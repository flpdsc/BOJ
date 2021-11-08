//AC https://www.acmicpc.net/problem/5430
#include <iostream>
#include <vector>
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
        int n, tmp=0, error=0;
        vector<int> arr;

        cin >> p >> n >> input;

        // arr에 저장
        for(int j=0; j<input.size(); ++j){
            if(input[j]>='0' && input[j]<='9'){
                if(tmp!=0) tmp *= 10;
                tmp += input[j]-48;
            }
            else if(input[j]==',' || input[j]==']'){
                if(tmp!=0){
                    arr.push_back(tmp);
                    tmp = 0;
                }
            }
        }

        // 함수 수행
        for(int j=0; j<p.size(); ++j){
            if(p[j]=='R') reverse(arr.begin(), arr.end());
            else if(p[j]=='D'){
                if(arr.size()==0){ // 에러
                    error = 1;
                    break;
                }
                else arr.erase(arr.begin());
            }
        }

        //출력
        if(error==1) cout << "error" << endl;
        else{
            cout << "[";
            while(!arr.empty()){
                cout << arr[0];
                arr.erase(arr.begin());
                if(!arr.empty()) cout << ",";
            }
            cout << "]" << endl;
        }
    }
    return 0;
}