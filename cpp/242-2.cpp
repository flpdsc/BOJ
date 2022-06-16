//다음 순열 https://www.acmicpc.net/problem/10972
#include <iostream>
#include <algorithm>
using namespace std;

int arr[10000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        cin >> arr[i];
    }
    //1 2 3 4 5 6 7
    int p=-1;
    for(int i=n-1; i>0; --i)
    {
        if(arr[i-1]<arr[i])
        {
            p = i-1;
            break;
        }
    }
    if(p==-1)
    {
        cout << "-1\n";
    }
    else
    {
        for(int i=n-1; i>p; --i)
        {
            if(arr[p]<arr[i])
            {
                int tmp = arr[p];
                arr[p] = arr[i];
                arr[i] = tmp;
                break;
            }
        }
        sort(arr+(p+1), arr+n);
        for(int i=0; i<n; ++i)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}