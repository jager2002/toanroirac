#include<bits/stdc++.h>

using namespace std;
int n,kg,a[1000],c[1000],b[1000],ok;
void ktao()
{
    for(int i=0;i<n;i++) b[i]=0;
}
void sinh()
{
    int i=n-1;
    while(i!=-1 && b[i]==1)
    {
        b[i]=0;
        i--;
    }
    if(i==-1) ok=0;
    else b[i]=1;
}
int main()
{
    cin >> n >> kg;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> c[i];
    ok=1;
    ktao();
    sinh();
    float flag=0;
    while(ok)
    {
        float res=0,sum=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]==1)
            {
                res+=a[i];
                sum+=c[i];
            }
        }
        if(res<=kg)
        {
            flag=max(sum,flag);
        }
        sinh();
    }
    ok=1;
    ktao();
    sinh();
    while(ok)
    {
        float res=0,sum=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]==1)
            {
                res+=a[i];
                sum+=c[i];
            }
        }
        if(res<=kg && sum==flag)
        {
            printf("%.1f\n",flag);
            for(int i=0;i<n;i++) cout << b[i] << " ";
            break;
        }
        sinh();
    }
}
