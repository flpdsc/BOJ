//환상의 짝궁 https://www.acmicpc.net/problem/15711

// 골드바흐의 추측
//   2를 제외한 10^18 이하 짝수는 소수의 합으로 표현 가능 
//   홀수 = 짝수+홀수
//   짝수는 2 하나 뿐으로, 홀수 일 경우 X = S-2 가 소수인지 판단

#include <iostream>
#include <vector>
#define MAX 2000000 //root(2*10^16) for Eratosthenes 
using namespace std;

bool not_prime[MAX+1];
vector<int> prime;

void Eratos()
{
    not_prime[0] = not_prime[1] = true;
    for(int i=2; i<MAX; ++i){
        if(!not_prime[i]){
            prime.push_back(i);
            for(int j= i+i; j<=MAX; j+=i) not_prime[j] = true;
        }
    }
}

bool isPrime(long long x)
{
    if(x<=MAX) return !not_prime[x];
    else{
        for(int i=0; i<prime.size(); ++i){
            if(x%prime[i]==0) return false;
        }
        return true;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    Eratos();
    for(int i=0; i<t; ++i){
        long long a, b, s;
        cin >> a >> b;
        s = a+b;
        if(s==2) cout << "NO\n";
        else if(s%2==0) cout << "YES\n";
        else{
            if(isPrime(s-2)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}