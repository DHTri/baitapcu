#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int nt(int n)
{
    if(n < 2)
        return 0;
    for(int i =2;i<=sqrt(n);i++)
        if(n%i == 0)
            return 0;
    return 1;
}

int kt(int n)
{
    if(n%2 != 0 && nt(n) && nt((n+1)/ 2))
        return 1;
    return 0;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
       int l, r;
       cin>>l>>r;
       int d =0 ;
       for(int i =l;i<=r;i++)
            if(kt(i))
                d++;
        cout<<d<<endl;
    }
}
