//1, 2, 3 더하기 https://www.acmicpc.net/problem/9095
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t, n;
    vector<int> dy(12);

    dy[1]=1, dy[2]=2, dy[3]=4;

    cin >> t;

    for(int i=0; i<t; ++i){
        cin >> n;
        if(dy[n]==0){
            for(int j=4; j<=n; ++j) dy[j] = dy[j-1]+dy[j-2]+dy[j-3];
        }
        cout << dy[n] << endl;
    }

    return 0;
}
