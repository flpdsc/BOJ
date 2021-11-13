//약수 https://www.acmicpc.net/problem/1037
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, mid;
    vector<int> arr;
    cin >> n;
    for(int i=0; i<n; ++i){
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    mid = arr.size()/2;
    if(arr.size()%2!=0) cout << arr[mid]*arr[mid] << endl;
    else cout << arr[mid-1]*arr[mid] << endl;
    return 0;
}