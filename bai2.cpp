#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;cin>>n;
    vector<int> a(n);

    int demchan = 0, demle = 0;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        if(a[i] % 2 == 0)
            demchan++;
        else
            demle++;
    }

    cout<<( demchan * (demchan - 1) / 2 ) + (demle * (demle - 1) / 2);
}
