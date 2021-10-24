//숫자 카드 https://www.acmicpc.net/problem/10815
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i) cin >> arr[i];
    sort(arr.begin(), arr.end());
    cin >> m;
    for(int i=0; i<m; ++i){
        int tmp;
        cin >> tmp;
        int mid, lt=0, rt=n-1;
        while(lt<=rt){
            mid = (lt+rt)/2;
            if(arr[mid]==tmp){
                cout << "1 ";
                break;
            }
            else if(arr[mid]>tmp) rt = mid-1;
            else lt = mid+1;
        }
        if(arr[mid]!=tmp) cout << "0 ";
    }
    cout << endl;
    return 0;
}