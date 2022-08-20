//좋은 구간 https://www.acmicpc.net/problem/1059
#include <iostream>
using namespace std;

bool nums[1001];

int main()
{
    int l, n, p;
    cin >> l;
    nums[0] = true;
    for(int i=0; i<l; ++i){
        int num;
        cin >> num;
        nums[num] = true;
    }
    cin >> n;

    int s=-1, e=-1;

    p=n;
    while(!nums[p--]) ++s;

    p=n;
    while(!nums[p++]) ++e;

    int res=s*(e+1)+e;
    if(res<0) res=0;

    cout << res << '\n';
    return 0;
}