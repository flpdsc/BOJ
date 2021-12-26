//공유기 설치 https://www.acmicpc.net/problem/2110
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> h, c;

int main()
{
    int n, c;
    cin >> n >> c;
    for(int i=0; i<n; ++i){
        int tmp;
        cin >> tmp;
        h.push_back(tmp);       
    }
    sort(h.begin(), h.end());

    int lt = 1;
    int rt = h[n-1]-h[0];
    int dst = 0;

    while(lt<=rt){
        int mid = (lt+rt)/2;
        int cnt=1, tmp=0;
        for(int i=1; i<n; ++i){
            if(h[i]-h[tmp]>=mid){
                tmp = i;
                cnt++;
            } 
        }
        if(cnt>=c){
            dst = mid;
            lt = mid+1;
        }
        else rt = mid-1;
    }

    cout << dst << '\n';
    return 0;
}
