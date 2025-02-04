//너의 평점은 https://www.acmicpc.net/problem/25206
#include <iostream>
using namespace std;

int main()
{
    string subject, grade; //subject:과목, grade:등급
    double credit, score, css = 0, cs = 0; //credit:학점, score:과목평점, css:학점*과목평점의 합, cs:학점총합
    int t = 20;
    while(t--)
    {
        score = 0;
        cin >> subject >> credit >> grade;
        if(grade[0]!='P')
        {
            if(grade[0]=='A') score = 4;
            else if(grade[0]=='B') score = 3;
            else if(grade[0]=='C') score = 2;
            else if(grade[0]=='D') score = 1;
            else if(grade[0]=='F') score = 0;
            if(grade[1]=='+') score += 0.5;
            css += credit*score;
            cs += credit;
        }
    }
    if(cs==0) cout << css << '\n'; //전체 F인 안타까운 경우
    else cout << css/cs << '\n';
    return 0;
}