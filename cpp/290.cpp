//수열 정렬 https://www.acmicpc.net/problem/1015
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int B[50];

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int> > A;
    for(int i=0; i<n; ++i){
        int num;
        cin >> num;
        A.push_back(make_pair(num, i));
    }

    sort(A.begin(), A.end());
    
    for(int i=0; i<A.size(); ++i)
        B[A[i].second] = i;
    
    for(int i=0; i<n; ++i)
        cout << B[i] << ' ';
    
    return 0;
}