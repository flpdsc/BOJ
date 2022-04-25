//국영수 https://www.acmicpc.net/problem/10825
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Grade
{
    string name;
    int kor, eng, mat;
    Grade(string n, int k, int e, int m)
    {
        name = n;
        kor = k;
        eng = e;
        mat = m;
    }
    bool operator<(const Grade &b)const
    {
        if(kor==b.kor)
        {
            if(eng==b.eng)
            {
                if(mat==b.mat)
                {
                    return name<b.name; // 모든 점수가 같으면 이름이 사전 순으로 증가하는 순서로
                }
                return mat>b.mat; // 국어 점수와 영어 점수가 같으면 수학 점수가 감소하는 순서로
            }
            return eng<b.eng; // 국어 점수가 같으면 영어 점수가 증가하는 순서로
        }
        else return kor>b.kor; // 국어 점수가 감소하는 순서로
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    vector<Grade> v;
    cin >> n;
    while(n--)
    {
        string name;
        int kor, eng, mat;
        cin >> name >> kor >> eng >> mat;
        v.push_back(Grade(name, kor, eng, mat));

    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); ++i)
        cout << v[i].name << '\n';
    return 0;
}
