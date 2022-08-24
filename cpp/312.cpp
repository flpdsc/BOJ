//반지 https://www.acmicpc.net/problem/5555
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string key;
    int n;
    cin >> key >> n;
    int res=0;
    while(n--){
        string str;
        cin >> str;
        str += str;
        cout << str.find(key) << '\n';
        if(str.find(key)!=string::npos) ++res;
    }
    cout << res << '\n';
    return 0;
}