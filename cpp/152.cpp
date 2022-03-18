//영화감독 숌 https://www.acmicpc.net/problem/1436
#include <iostream>
using namespace std;
int main()
{
    int n, cnt=0;
    cin >> n;

    int res=666;
    while(1){
        int tmp = res;
        while(tmp>=666){
            if(tmp%1000==666){ //앞자리 쳐내기
                cnt++;
                break;
            }
            tmp/=10; //뒷자리 쳐내기
        }
        if(cnt==n) break;
        res++;
    }
    cout << res << '\n';

    return 0;
}
