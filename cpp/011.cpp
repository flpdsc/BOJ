//에디터 https://www.acmicpc.net/problem/1406
#include <iostream>
using namespace std;
char text[600001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int cur=0, m, byte;
    cin >> text;
    while(1){
        if(text[cur]=='\0') break;
        cur++;
    }
    byte=cur;
    cin >> m;
    for(int i=0; i<m; ++i){
        char cmd;
        cin >> cmd;
        if(cmd=='L'){
            if(cur>0) cur--;
        }
        if(cmd=='D'){
            if(cur<byte) cur++;
        }
        if(cmd=='B' && cur>0){
            for(int i=cur; i<=byte; ++i) text[i-1] = text[i];
            text[--byte] = '\0';
            cur--;
        }
        if(cmd=='P'){
            char p;
            cin >> p;
            for(int i=byte; i>cur; --i) text[i] = text[i-1];
            text[cur++] = p;
            byte++;
        }
    }
    cout << text << endl;
}
