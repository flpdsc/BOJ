//예산 https://www.acmicpc.net/problem/2512
#include <iostream>
using namespace std;

int b[10000];
int main()
{
    int n, m, res, lt=0, rt=0;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> b[i]; 
        rt = max(rt, b[i]); 
    }
    cin >> m;
    while(lt<=rt){
        int sum=0;
        int mid = (lt+rt)/2;
        for(int i=0; i<n; ++i){
            if(b[i]<mid) sum += b[i];
            else sum += mid;
        }
        if(sum>m){
            rt = mid-1;
        }
        else{
            res = mid;
            lt = mid+1;
        }
    }
    cout << res << '\n';
    return 0;
}
