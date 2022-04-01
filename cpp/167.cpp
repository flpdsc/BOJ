//팩토리얼 0의 개수 https://www.acmicpc.net/problem/1676
#include <iostream>
using namespace std;

int PrimeFact(int num)
{
    int x2=0, x5=0;
    for(int i=2; i<=num; ++i){
        int tmp = i;
        while(1){
            if(tmp%2!=0 && tmp%5!=0) break;
            if(tmp%2==0){
                x2++;
                tmp/=2;
            }
            if(tmp%5==0){
                x5++;
                tmp/=5;
            }
        }
    }
    return min(x2, x5);
}

int main()
{
    int n;
    cin >> n;
    cout << PrimeFact(n) << '\n';
    return 0;
}
