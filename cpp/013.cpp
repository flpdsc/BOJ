//단어 정렬 https://www.acmicpc.net/problem/1181
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
    if(a.length()==b.length()) return a<b;
    return a.length()<b.length();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    string str;
    vector<string> arr;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> str;
        arr.push_back(str);
    }
    sort(arr.begin(), arr.end(), compare);
    for(int i=1; i<n; ++i){
        if(arr[i]==arr[i-1]) continue;
        cout << arr[i] << endl;
    }
    return 0;
}