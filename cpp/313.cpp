//숫자놀이 https://www.acmicpc.net/problem/1755
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string al[10] = {"zero ", "one ", "two ", "three ", "four ", 
                "five ", "six ", "seven ", "eight ", "nine "};

int main()
{
    int m, n;
    cin >> m >> n;
    vector<pair<string, int> > nums;
    for(int i=m; i<=n; ++i){
        string d1="", d2="";
        if(i>=10) d2 = al[i/10];
        d1 = al[i%10];
        nums.push_back(make_pair(d2+d1, i));
    }
    sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size(); ++i){
        cout << nums[i].second << ' ';
        if((i+1)%10==0) cout << '\n';
    }
    return 0;
}