//암기왕 https://www.acmicpc.net/problem/2776
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

bool BinarySearch (int x, int h)
{
    int low = 0;
    int high = h-1;
    int mid;

    while(high>=low)
    {
        mid = (low+high)/2;

        if(x>v[mid]) low = mid+1;
        else if(x<v[mid]) high = mid-1;
        else return 1;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        v.clear();
        int n;
        cin >> n;
        for(int i=0; i<n; ++i)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        
        int m;
        cin >> m;
        for(int i=0; i<m; ++i)
        {
            int num;
            cin >> num;
            if(BinarySearch(num, n)) cout << "1\n";
            // if(binary_search(v.begin(), v.end(), num)) cout << "1\n";
            else cout << "0\n";
        }
    }
    return 0;
}