//랜선 자르기 https://www.acmicpc.net/problem/1654
#include <iostream>
using namespace std;

int lan[10000];

int main()
{
    int k, n, res=0;
    long long lt=0, rt=0;

    cin >> k >> n;
    for(int i=0; i<k; ++i){
        cin >> lan[i];
        if(rt<lan[i]) rt = lan[i];
    }

    while(lt<=rt){
        int cnt=0;
        long long mid = (lt+rt)/2;
        if(rt==1){
            res = 1;
            break;
        }
        for(int i=0; i<k; ++i){
            cnt += lan[i]/mid;
        }
        if(cnt<n){
            rt = mid-1;
        }
        else{
            lt = mid+1;
            res = mid;
        }
    }
    cout << res << '\n';
    return 0;
}