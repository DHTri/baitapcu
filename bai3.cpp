#include <bits/stdc++.h>

using namespace std;

int nt (int n)

{

if (n < 2)

return 0;

for(int i=2;i<=sqrt(n);i++)

if(n%i == 0)

return 0;

return 1;

int kt (int n)

{

int s = (n+1)/2;

if(n%2!= 0)

if (nt(s) && nt(n))

return 1;

return 0;

}

int main()

{

int q;cin>>q;

while (q--)

{

int a, b;

cin>>a>>b;

int d = 0;

for(int i =a;i<=b;i++)

{

if (kt(i))

d++;

}

cout<<d<<endl;

}

}
