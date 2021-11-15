//최대공약수와 최소공배수 https://www.acmicpc.net/problem/2609
#include <iostream>
#include <cmath>
using namespace std;
int aa[10001], ba[10001];
int factor(int x, int* arr)
{
    int f=2;
    while(1){
        if(x%f==0){
            arr[f]++;            
            x /= f;
        }
        else f++;
        if(x==1) break;
    }
    return f;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int a, b, m, gcf=1, lcm=1;
    cin >> a >> b;
    m = max(factor(a, aa), factor(b, ba));
    for(int i=2; i<=m; ++i){
        if(aa[i]!=0 || ba[i]!=0){
            gcf *= pow(i, min(aa[i], ba[i]));
            lcm *= pow(i, max(aa[i], ba[i]));
        }
    }
    cout << gcf << '\n' << lcm << '\n';
    return 0;
}