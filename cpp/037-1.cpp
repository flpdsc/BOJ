//골드바흐의 추측 https://www.acmicpc.net/problem/6588
#include <iostream>
#include <vector>
#define MAX 1000000
using namespace std;

bool not_prime[MAX+1];
vector<int> odd_prime;

void findPrime(int x)
{
    not_prime[0] = not_prime[1] = true;
    for(int i=2; i*i<=x; ++i){
        if(!not_prime[i]){
            for(int j=i+i; j<=x; j+=i) not_prime[j] = true;
        }
    }
    for(int i=2; i<=x; ++i){
        if(!not_prime[i]){
            if(i%2==0) not_prime[i] = true;
            else odd_prime.push_back(i);
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    findPrime(MAX);
    while(1){
        cin >> n;
        if(n==0) break;
        else{
            for(int i=0; i<odd_prime.size(); ++i){
                int a = odd_prime[i];
                int b = n-a;
                if(b<0) break;
                if(!not_prime[b]){
                    cout << n << " = " << a << " + " << b << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}