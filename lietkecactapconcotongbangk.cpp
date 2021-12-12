#include<bits/stdc++.h>

using namespace std;
int n,k,a[1000],v[1000];
vector<vector<int>> res;
void init()
{
    res.clear();
    cin >> k >> n;
    for(int i=1;i<=n;i++) cin >> v[i];
    sort(v+1,v+1+n,greater<int>());
}
void Try(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n)
        {
            int s=0;
            for(int l=1;l<=n;l++)
            {
                if(a[l]) s+=v[l];
            }
            if(s==k)
            {
                vector<int> x;
                for(int l=1;l<=n;l++)
                {
                    if(a[l]) x.push_back(v[l]);
                }
                sort(x.begin()+1,x.begin()+x.size());
                res.push_back(x);
            }
        }
        else Try(i+1);
    }
}
int main()
{
    init();
    Try(1);
    sort(res.begin(),res.end());
    if(res[res.size()-1].size()==2 && res[res.size()-2].size()==1) swap(res[res.size()-1],res[res.size()-2]);
    for(int i=res.size()-1;i>=0;i--)
    {
        for(int j=0;j<res[i].size();j++) cout << res[i][j] << " ";
        cout << endl;
    }
}
