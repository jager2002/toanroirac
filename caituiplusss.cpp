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
    int flag=0;
    int kg_min=INT_MAX; 
    while(ok)
    {
        int res=0,sum=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]==1)
            {
                res+=a[i];
                sum+=c[i];
            }
        }
        if(sum<=kg)
        {
            if(flag<=res)
            {
            	if(flag==res)
            	{
            		if(kg_min>sum) kg_min=sum;
				}
				else
				{
					flag=res;
					kg_min=sum;
				}
			}
        }
        sinh();
    }
    ok=1;ktao();sinh();
    while(ok)
    {
    	int res=0,sum=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]==1)
            {
                res+=a[i];
                sum+=c[i];
            }
        }
        if(res==flag && sum==kg_min)
        {
        	cout << flag << endl;
            for(int i=0;i<n;i++) cout << b[i] << " ";
            break;
        }
        sinh();
	}
}
