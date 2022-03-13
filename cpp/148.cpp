//나이순 정렬 https://www.acmicpc.net/problem/10814
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct List{
    int idx, age;
    string name;
    List(int a, int b, string c){
        idx = a;
        age = b;
        name = c;
    }
    bool operator<(const List &list)const{
        if(age==list.age)
            return idx<list.idx;
        else return age<list.age;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    vector<List> L;
    cin >> n;
    for(int i=0; i<n; ++i){
        int age;
        string name;
        cin >> age >> name;
        L.push_back(List(i, age, name));
    }
    sort(L.begin(), L.end());
    for(int i=0; i<n; ++i){
        cout << L[i].age << ' ' << L[i].name << '\n';
    }

    return 0;
}