//방 번호 https://www.acmicpc.net/problem/1475
#include <iostream>
using namespace std;

int check[10];

int main()
{
    string N;
    cin >> N;
    for(int i=0; i<N.size(); ++i)
        check[N[i]-'0']++;

    int tmp = check[6]+check[9];
    check[6] = tmp/2+tmp%2;
    check[9] = 0;

    int res=0;
    for(int i=0; i<10; ++i)
        res = max(check[i], res);

    cout << res << '\n';
    return 0;
}