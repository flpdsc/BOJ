//스택 2 https://www.acmicpc.net/problem/28278
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, cmd, x;
    stack<int> s;
    cin >> n;
    while(n--)
    {
        cin >> cmd;
        switch(cmd)
        {
            case 1: //정수 X push
                cin >> x;
                s.push(x);
                break;
            case 2: //맨 위의 정수 빼고 출력, 없으면 -1 출력
                if(s.empty()) cout << "-1\n";
                else
                {
                    cout << s.top() << '\n';
                    s.pop();
                } 
                break;
            case 3: //스택에 들어있는 정수의 개수 출력
                cout << s.size() << '\n';
                break;
            case 4: //비어있으면1, 아니면0 출력
                if(s.empty()) cout << "1\n";
                else cout << "0\n";
                break;
            case 5: //맨 위 정수 출력, 없으면 -1 출력
                if(s.empty()) cout << "-1\n";
                else cout << s.top() << '\n';
                break;
        }
    }
    return 0;
}