//줄 세우기 https://www.acmicpc.net/problem/11536
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<string> names, sorted;
    int n;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        string str;
        cin >> str;
        names.push_back(str);
        sorted.push_back(str);
        
    }
    // sorted.assign(names.begin(), names.end());
    sort(sorted.begin(), sorted.end());

    int i, size=names.size();
    for(i=0; i<size; ++i)
    {
        if(names[i]!=sorted[i]) break;
    }
    if(i==size)
    {
        cout << "INCREASING\n";
        return 0;
    }
    for(i=0; i<size; ++i)
    {
        if(names[i]!=sorted[size-(i+1)]) break;
    }
    if(i==size)
    {
        cout << "DECREASING\n";
        return 0;
    }
    cout << "NEITHER\n";
    return 0;
}