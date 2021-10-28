//에디터 https://www.acmicpc.net/problem/1406
#include <iostream>
#include <list>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    string str;
    list<char> text;
    cin >> str;
    for(int i=0; i<str.size(); ++i){
        text.push_back(str.at(i));
    }

    int m;
    list<char>::iterator cur = text.end();
    cin >> m;

    for(int i=0; i<m; ++i){
        char cmd;
        cin >> cmd;
        if(cmd=='L'){
            if(cur!=text.begin()) cur--;
        }
        else if(cmd=='D'){
            if(cur!=text.end()) cur++;
        }
        else if(cmd=='B' && cur!=text.begin()){
            cur = text.erase(--cur);
        }
        if(cmd=='P'){
            char p;
            cin >> p;
            text.insert(cur,p);
        }
    }

    for(list<char>::iterator it=text.begin(); it!=text.end(); ++it){
        cout << * it;
    }
    cout << endl;
    return 0;
}