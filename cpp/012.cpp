//보물 https://www.acmicpc.net/problem/1026
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, sum=0;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    for(int i=0; i<n; ++i) cin >> A[i];
    for(int i=0; i<n; ++i) cin >> B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());
    for(int i=0; i<n; ++i) sum += A[i]*B[i];
    cout << sum << endl;
    return 0;
}