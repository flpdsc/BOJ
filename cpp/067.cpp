//나무 자르기 https://www.acmicpc.net/problem/2805
#include <iostream>
#include <vector>
using namespace std;

vector<int> t;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m, lt=0, rt=0, mid, res=0;

    cin >> n >> m;
    for(int i=0; i<n; ++i){
        int tmp;
        cin >> tmp;
        t.push_back(tmp);
        rt = max(rt, tmp);
    }

    while(lt<=rt){
        long long sum=0;
        mid = (lt+rt)/2;
        for(int i=0; i<n; ++i){
            if(t[i]>mid) sum += t[i]-mid;
        }
        if(sum<m) rt = mid-1;
        else{
            res = mid;
            lt = mid+1;
        }
    }

    cout << res << '\n';
    return 0;
}