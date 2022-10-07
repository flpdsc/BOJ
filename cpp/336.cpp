//귀걸이 https://www.acmicpc.net/problem/1380
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> names;

void Input(int stdnt)
{
    cin.ignore();
    string str;   
    for(int i=0; i<stdnt; ++i)
    {
        getline(cin, str);    
        names.push_back(str);
    }
}

int Solution(int earring)
{
    int num;
    char c;
    bool ch[101] = {false, };

    for(int i=0; i<earring; ++i)
    {
        cin >> num >> c;
        ch[num] = !ch[num];
    }
    for(int i=1; i<=100; ++i)
    {
        if(ch[i]) return i-1;
    }
}

int main()
{
    int num = 1;
    while(1)
    {
        int n;
        cin >> n;
        if(n==0) break;
        Input(n);

        int ans = Solution(n*2-1);
        cout << num++ << ' ' << names[ans] << '\n';
        names.clear();
    }
    return 0;
}