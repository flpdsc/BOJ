//소수의 연속합 https://www.acmicpc.net/problem/1644
#include <iostream>
#include <vector>
using namespace std;

bool not_prime[4000001];
vector<int> prime;

void findPrime(int x)
{
    for(int i=2; i*i<=x; ++i){
        if(!not_prime[i]){
            for(int j= i+i; j<=x; j+=i) not_prime[j] = true;
        }
    }
    for(int i=2; i<=x; ++i){
        if(!not_prime[i]) prime.push_back(i); 
    }
}

int main()
{
    int n, p1=0, p2=0, sum=0, cnt=0;
    cin >> n;
    findPrime(n);
    while(1){
        if(sum>=n) sum -= prime[p1++];
        else if(p2==prime.size()) break;
        else sum += prime[p2++];
        if(sum==n) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}