//이전 순열 https://www.acmicpc.net/problem/10973
#include <iostream>
#include <algorithm>

int arr[10000];

using namespace std;
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

    int p = -1;
    for(int i=n-1; i>0; --i)
    {
        //뒤에서부터 내림차순 확인, 규칙을 깨는 위치 p에 저장
        if(arr[i-1]>arr[i])
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
        //뒤에서부터 arr[p]보다 작은 숫자를 찾아 둘 swap
        for(int i=n-1; i>p; --i)
        {
            if(arr[p]>arr[i])
            {
                int tmp = arr[p];
                arr[p] = arr[i];
                arr[i] = tmp;
                break;
            }
        }
        //앞에서부터 내림차순 정렬
        sort(arr+(p+1), arr+n, greater<int>());
        for(int i=0; i<n; ++i)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}