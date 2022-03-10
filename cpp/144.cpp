//덩치 https://www.acmicpc.net/problem/7568
#include <iostream>
using namespace std;

int main()
{
    int n;
    pair<int, int> D[50];
    
    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> D[i].first >> D[i].second;

    for(int i=0; i<n; ++i){
        int res=1;
        for(int j=0; j<n; ++j){
            //키와 몸무게가 둘다 작으면 랭크가 떨어짐
            if(D[i].first<D[j].first && D[i].second<D[j].second){
                res++;
            }
        }
        cout << res << ' ';
    }
    puts("");
    return 0;
}
