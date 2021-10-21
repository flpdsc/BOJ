#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    vector<int> a;

    scanf("%d", &n);
    for(int i=0; i<n; ++i){
        int tmp;
        scanf("%d", &tmp);
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());

    scanf("%d", &m);
    for(int i=0; i<m; ++i){
        int q;
        scanf("%d", &q);
        int ch=0, rt = n-1, lt = 0, mid;
        while(lt<=rt){
            mid = (lt+rt)/2;
            if(a[mid]==q){
                ch = 1;
                break;
            }
            else if(a[mid]>q) rt = mid-1;
            else lt = mid+1;
        }
        if(ch==0) printf("0\n");
        else printf("1\n");
    }
    return 0;
}