//숫자 카드2 https://www.acmicpc.net/problem/10816
//hash map
#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m, tmp;
    unordered_map<int, int> map;

    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> tmp;
        map[tmp]++;
    }

    cin >> m;
    for(int i=0; i<m; ++i){
        cin >> tmp;
        cout << map[tmp] << " ";
    }

    cout << endl;
    return 0;
}