//이름 궁합 https://www.acmicpc.net/problem/15312
#include <iostream>
#include <queue>
using namespace std;

int const s[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};

int main()
{
    string a, b;
    cin >> a >> b;
    queue<int> c;
    for(int i=0; i<a.length(); ++i)
    {
        c.push(s[a[i]-'A']);
        c.push(s[b[i]-'A']);
    }

    while(c.size()>2)
    {
        int t = c.size()-1;
        while(t--)
        {
            int tmp = c.front();
            c.pop();
            tmp += c.front();
            c.push(tmp%10);
        }
        c.pop();
    }

    cout << c.front();
    c.pop();
    cout << c.front() << '\n';
    return 0;
}