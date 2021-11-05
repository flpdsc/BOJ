//스택 수열 https://www.acmicpc.net/problem/1874
#include <cstdio>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    int n, cnt=1;
    stack<int> s;
    vector<char> r;
    
    scanf("%d", &n);

    for(int i=0; i<n; ++i){
        int tmp;
        scanf("%d", &tmp);
        while(tmp>=cnt){
            s.push(cnt++);
            r.push_back('+');
        }
        if(s.top()==tmp){
            s.pop();
            r.push_back('-');
        }
        else{
            printf("NO\n");
            return 0;
        }
    }

    for(int i=0; i<r.size(); ++i) printf("%c\n", r[i]);
    
    return 0;
}