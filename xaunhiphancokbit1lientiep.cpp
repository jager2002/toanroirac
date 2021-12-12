#include<bits/stdc++.h>

using namespace std;
int n,k,a[1000],ok;
void ktao()
{
    for(int i=1;i<=n;i++) a[i]=0;
}
void sinh()
{
    int i=n;
    while(i!=0 && a[i]==1)
    {
        a[i]=0;
        i--;
    }
    if(i==0) ok=0;
    else a[i]=1;
}
int main()
{
    cin >> k >> n;
    ktao();
    ok=1;
    while(ok)
    {
        int dem=0,res=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i]==1) 
            {
                dem++;
                res=max(res,dem);
            }
            else dem=0;
        }
        if(res==k)
        {
            for(int i=1;i<=n;i++) cout << a[i] <<" ";
            cout << endl;
        }
        sinh();
    }
}
