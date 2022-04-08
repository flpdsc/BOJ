//통계학 https://www.acmicpc.net/problem/2108
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int N, sum;
vector<int> Nums;
pair<int, int> countNums[4001];

int Mean()
{
    return round((float)sum/N);
}

int Median()
{
    return Nums[N/2];
}

int Mode()
{    
    int maximum=0;
    vector<int> res;
    for(int i=0; i<Nums.size(); ++i){
        if(Nums[i]>=0){
            maximum = max(maximum, ++countNums[Nums[i]].first);
        }
        else{
            maximum = max(maximum, ++countNums[-Nums[i]].second);
        }
    }

    for(int i=0; i<4001; ++i){
        if(countNums[i].first==maximum) res.push_back(i);
        if(countNums[i].second==maximum) res.push_back(-i);
    }
    sort(res.begin(), res.end());
    if(res.size()==1) return res[0];
    else return res[1]; 
}

int Range()
{
    return Nums[Nums.size()-1] - Nums[0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;
    for(int i=0; i<N; ++i){
        int num;
        cin >> num;
        Nums.push_back(num);
        sum += num;
    }
    sort(Nums.begin(), Nums.end());

    cout << Mean() << '\n';
    cout << Median() << '\n';
    cout << Mode() << '\n';
    cout << Range() << '\n';
    return 0;
}
