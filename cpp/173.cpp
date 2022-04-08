//듣보잡 https://www.acmicpc.net/problem/1764
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M;
    vector<string> vec, res;
    cin >> N >> M;
    
    for(int i=0; i<N+M; ++i){
        string str;
        cin >> str;
        vec.push_back(str);
    }
    sort(vec.begin(), vec.end());
    
    for(int i=1; i<vec.size(); ++i){
        if(vec[i-1]==vec[i]) res.push_back(vec[i]); 
    }

    cout << res.size() << '\n';
    for(int i=0; i<res.size(); ++i){
        cout << res[i] << '\n';
    }

    return 0;
}