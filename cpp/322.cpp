//3의 배수 https://www.acmicpc.net/problem/1769
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;
    cin >> str;

    int cnt = 0, sum = 0;

    while(1)
    {
        if(str.size()==1)
        {
            sum = stoi(str);
            break;
        }
        cnt++;
        sum = 0;
        for(int i=0; i<str.size(); ++i)
            sum += stoi(str.substr(i,1));
        str = to_string(sum);   
    }

    cout << cnt << '\n';
    if(sum%3==0) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}