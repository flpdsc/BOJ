//중복 빼고 정렬하기 https://www.acmicpc.net/problem/10867
#include <iostream>
using namespace std;
int pos[1001], neg[1001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, max=-2147000000, min=2147000000;
    cin >> n;
    for(int i=0; i<n; ++i){
        int tmp;
        cin >> tmp;
        if(tmp<0){
            neg[-tmp]++;
            if(min>tmp) min = tmp;
        }
        else{
            pos[tmp]++;
            if(max<tmp) max = tmp;
        }
    }
    for(int i=-min; i>0; --i){
        if(neg[i]!=0) cout << -i << " ";
    }
    for(int i=0; i<=max; ++i){
        if(pos[i]!=0) cout << i << " ";
    }
    cout << endl;
    return 0;
}