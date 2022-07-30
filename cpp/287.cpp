//생일 https://www.acmicpc.net/problem/5635
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student
{
    string name;
    int year, month, day;
    Student(string nn, int yy, int mm, int dd)
    {
        name = nn;
        year = yy;
        month = mm;
        day = dd;
    }
    bool operator<(const Student &b)const
    {
        if(year!=b.year)
            return year<b.year;
        if(month!=b.month)
            return month<b.month;
        return day<b.day;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<Student> v;
    for(int i=0; i<n; ++i)
    {
        string nn;
        int yy, mm, dd;
        cin >> nn >> dd >> mm >> yy;
        v.push_back(Student(nn, yy, mm, dd));
    }
    sort(v.begin(), v.end());
    cout << v.back().name << '\n';
    cout << v.front().name << '\n';
    return 0;
}