//Base Conversion https://www.acmicpc.net/problem/11576
#include <iostream>
#include <cmath>
#include <stack>
using namespace std;
int main()
{
    int a, b, m;
    cin >> a >> b >> m;
    int dec=0;
    for(int i=m-1; i>=0; --i){
        int num;
        cin >> num;
        dec += num*pow(a, i);
    } 

    // 1번째 풀이
    // int n=0;
    // while(dec>=pow(b, n)) ++n;

    // while(n--){
    //     int num=0;
    //     while(1){
    //         if(dec<num*pow(b, n)){
    //             dec -= (num-1)*pow(b, n);
    //             break;
    //         }
    //         ++num;
    //     }
    //     cout << num-1 << ' ';
    // }

    // 2번째 풀이
    stack<int> s;
    while(dec>0){
        int num = dec%b;
        s.push(num);
        dec /= b;
    }

    while(!s.empty()){
        cout << s.top() << ' ';
        s.pop();
    }
    cout << '\n';
    return 0;
}