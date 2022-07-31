//팰린드롬 만들기 https://www.acmicpc.net/problem/1213
#include <iostream>
#include <vector>
using namespace std;

int alphabets[26];

int main()
{
    string name;
    cin >> name;
    for(int i=0; i<name.size(); ++i){
        int idx = name[i]-'A';
        alphabets[idx]++;
    }

    vector<char> v;
    char centre;
    int check = 0;
    for(int i=0; i<26; ++i){
        int n = alphabets[i]/2;
        
        while(n--)v.push_back(i+'A');
        
        if(alphabets[i]%2!=0){
            centre = i+'A';
            ++check;
        }

        if(name.size()%2==0 && alphabets[i]%2!=0 || check>1){
            cout << "I'm Sorry Hansoo\n";
            return 0;
        }
    }

    for(int i=0; i<v.size(); ++i) cout << v[i];
    if(check==1) cout << centre;
    for(int i=v.size()-1; i>=0; --i) cout << v[i];
    cout << '\n';
    return 0;
}