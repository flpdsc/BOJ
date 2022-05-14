//카드 놓기 https://www.acmicpc.net/problem/5568
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int n, k;
string cards[10];
bool visited[10];
vector<string> pick;
unordered_set<string> res;

void DFS(int depth)
{
    if(depth==k)
    {
        string str;
        for(int i=0; i<k; ++i)
        {
            str += pick[i];
        }
        res.insert(str);
        return;
    }
    for(int i=0; i<n; ++i)
    {
        if(!visited[i])
        {
            visited[i] = true;
            pick.push_back(cards[i]);
            DFS(depth+1);
            pick.pop_back();
            visited[i] = false;
        }
    }
}

int main()
{
    cin >> n >> k;
    for(int i=0; i<n; ++i)
    {
        cin >> cards[i];
    }
    DFS(0);
    cout << res.size() << '\n';
    return 0;
}