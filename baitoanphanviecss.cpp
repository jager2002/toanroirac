#include<bits/stdc++.h>

using namespace std;

int n,x[100],a[100][100],res=1e9;
vector<int> v;
bool used[100];
void xuly()
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s+=a[i][x[i]];
    }
    if(s< res){
        res=s;
        v.clear();
    }
    if(s==res)
    {
        for(int i=1;i<=n;i++)
        {
            v.push_back(x[i]);
        }
    }
}
void ql(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(!used[j])
        {
            used[j]=true;
            x[i]=j;
            if(i==n) xuly();
            else ql(i+1);
            used[j]=false;
        }
    }
}
void in()
{
    int d=0;
    for(int i=0;i<v.size();i++)
    {
        d++;
        cout << "Man"<<d<< "->Job" << v[i] <<" || ";
        if(d%n==0)
        {
            d=0;
            cout << endl;
        }
    }
}
int main()
{
    memset(used,false,sizeof(used));
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) cin >> a[i][j];
    }
    ql(1);
    in();
}
