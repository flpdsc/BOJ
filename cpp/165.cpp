//트리 순회 https://www.acmicpc.net/problem/1991
#include <iostream>
using namespace std;

pair<int, int> T[26];

void Preorder(int node)
{
    if(node == -19) return;
    cout << (char)(node+'A');
    Preorder(T[node].first);
    Preorder(T[node].second);
}

void Inorder(int node)
{
    if(node == -19) return;
    Inorder(T[node].first);
    cout << (char)(node+'A');
    Inorder(T[node].second);
}

void Postorder(int node)
{
    if(node == -19) return;
    Postorder(T[node].first);
    Postorder(T[node].second);
    cout << (char)(node+'A');
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    for(int i=0; i<n; ++i){
        char p0, c1, c2;
        cin >> p0 >> c1 >> c2;
        T[p0-'A'].first = c1-'A';
        T[p0-'A'].second = c2-'A';
    }

    Preorder(0);
    cout << '\n';
    Inorder(0);
    cout << '\n';
    Postorder(0);
    cout << '\n';

    return 0;
}
