#include<bits/stdc++.h>

using namespace std;

int n,m,a[50][50],x[100],res=0;

vector<int> v;

void xuly()
{
    int cot[100]={0},cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(x[i])
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i][j])
                {
                    if(!cot[j]) cnt++;
                    else return;
                    cot[j]=1;
                }
            }
        }
    }
    if(cnt>res)
    {
        res=cnt;
        v.clear();
    }
    if(cnt==res)
    {
        for(int i=1;i<=n;i++)
        {
            v.push_back(x[i]);
        }
    }
}

void ql(int i)
{
    for(int j=0;j<=1;j++)
    {
        x[i]=j;
        if(i==n) xuly();
        else ql(i+1);
    }
}
int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> a[i][j];
        }
    }
    ql(1);
    int d=0;
    for(int i=0;i<=v.size();i++)
    {
        d++;
        cout << v[i] << " ";
        if(d%n==0) cout << endl;
    }
}
