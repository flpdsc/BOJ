//암호 만들기 https://www.acmicpc.net/problem/1759
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int l, c;
vector<char> candidate, cipher;
char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

bool Checker()
{
    int vn=0;
    for(int i=0; i<l; ++i)
    {
        for(int j=0; j<5; ++j)
        {
            if(cipher[i] == vowels[j])
            {
                ++vn;
                break;
            }
        }
    }
    if(vn>0 && l-vn>1)
    {
        return true;
    }
    return false;
}

void FindCipher(int idx)
{
    if(cipher.size()==l)
    {
        if(Checker())
        {
            for(int i=0; i<l; ++i)
            {
                cout << cipher[i];
            }
            cout << '\n';
        }
        return;
    }
    for(int i=idx; i<c; ++i)
    {
        cipher.push_back(candidate[i]);
        FindCipher(i+1);
        cipher.pop_back();
    }
}
int main()
{
    cin >> l >> c;
    for(int i=0; i<c; ++i)
    {
        char ch;
        cin >> ch;
        candidate.push_back(ch);
    }
    sort(candidate.begin(), candidate.end());
    FindCipher(0);
    return 0;
}