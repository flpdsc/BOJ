//제곱ㄴㄴ수 https://www.acmicpc.net/problem/1016
#include <iostream>
using namespace std;

bool arr[1000001];

int main()
{
    long long min, max;
    int res=0;
    cin >> min >> max;
    for(long long i=2; i*i<=max; ++i){
        long long x = min/(i*i);
        if(min%(i*i)!=0) x++;
        while(x*i*i<=max){
            arr[x*i*i-min] = true;
            x++;
        }
    }
    for(int i=0; i<=max-min; ++i){
        if(arr[i]==false) res++;
    }
    cout << res << '\n';
    return 0;
}
