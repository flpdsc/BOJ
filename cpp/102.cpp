//돌 게임 https://www.acmicpc.net/problem/9655
#include <iostream>
using namespace std;

int DP[1001];

int main()
{
    int n;
    cin >> n; 

    DP[0] = 0;
    DP[1] = 1;
    DP[2] = 2;
    for(int i=3; i<=n; ++i)
        DP[i] = min(DP[i-1]+1, DP[i-3]+1);

    if(DP[n]%2) cout << "SK\n";
    else cout << "CY\n";    
    return 0;
}

// int main()
// {
//     int n;
//     cin >> n; 
//     if(n%2) cout << "SK\n";
//     else cout << "CY\n";    
//     return 0;
// }