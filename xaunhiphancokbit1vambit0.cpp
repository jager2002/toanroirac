#include<bits/stdc++.h>

using namespace std;
int k,m,n,a[10000],ok;
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
    cin >> k >> m >> n;
    ktao();
    ok=1;
    while(ok)
    {
        int dem=0,res=0,tmp=0,flag=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i]==0) dem++;
            else
            {
                if(dem==k) res++;
                dem=0;
            }
        }
        if(dem==k) res++;
        for(int i=1;i<=n;i++)
        {
            if(a[i]==1) tmp++;
            else
            {
                if(tmp==m) flag++;
                tmp=0;
            }
        }
        if(tmp==m) flag++;
        if(res==1 && flag==1)
        {
            for(int i=1;i<=n;i++) cout << a[i] << " ";
            cout << endl;
        }
        sinh();
    }
}
