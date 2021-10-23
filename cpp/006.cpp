//수 정렬하기3 https://www.acmicpc.net/problem/10989
#include <cstdio>
using namespace std;
int arr[10001];
int main()
{
    int n, max=0, tmp;
    scanf("%d", &n);
    for(int i=0; i<n; ++i){
        scanf("%d", &tmp);
        arr[tmp]++;
        if(tmp>max) max = tmp;
    }
    for(int i=1; i<=max; ++i){
        while(arr[i]!=0){
            printf("%d\n", i);
            arr[i]--;
        }
    }
    return 0;
}