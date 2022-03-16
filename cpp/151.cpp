//소인수분해 https://www.acmicpc.net/problem/11653
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, k=2;
    cin >> n;
    while(1){
        if(n==1) break;
        if(n%k==0){
            n /= k;
            cout << k << '\n';
        }
        else k++;
    }
    return 0;
}
