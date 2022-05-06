//패션왕 신해빈 https://www.acmicpc.net/problem/9375
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        vector<string> c; 
        vector<int> a;
        cin >> n;
        for(int i=0; i<n; ++i)
        {
            string item, cartegory;
            cin >> item >> cartegory;
            if(find(c.begin(), c.end(), cartegory) == c.end()) //새로운 카테고리 일 경우
            {
                c.push_back(cartegory);
                a.push_back(1);
            }
            else
            {
                int idx = find(c.begin(), c.end(), cartegory) - c.begin();
                a[idx]++;
            }
        }
        
        int res=1;
        //의상을 입지 않는 경우를 더해서 곱해줌
        for(int i=0; i<a.size(); ++i)
        {
            res *= a[i]+1;
        }
        //모두 입지 않는 경우를 빼줌
        cout << res-1 << '\n';
    }
    return 0;
}