//부등호 https://www.acmicpc.net/problem/2529
#include <iostream>
#include <vector>
using namespace std;

int k;
char ies[10];
bool visited[10];
vector<int> num;
vector<string> res;

bool Check()
{
    for(int i=1; i<=k; ++i){
        if(ies[i]=='<' && num[i-1]>num[i]) return false;
        else if(ies[i]=='>' && num[i-1]<num[i]) return false;
    }
    return true;
}

void DFS(int cnt)
{
    if(cnt==k+1){
        if(Check()){
            string tmp = "";
            for(int i=0; i<num.size(); ++i) tmp += to_string(num[i]);
            res.push_back(tmp);
        }
    }
    else{
        for(int i=0; i<10; ++i){
            if(!visited[i]){
                num.push_back(i);
                visited[i] = true;
                DFS(cnt+1);
                visited[i] = false;
                num.pop_back();
            }
        }

    }
}

int main()
{
    cin >> k;
    for(int i=1; i<=k; ++i) cin >> ies[i];

    DFS(0);

    cout << res[res.size()-1] << '\n' << res[0] << '\n';
    return 0;
}
