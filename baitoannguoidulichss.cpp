#include<bits/stdc++.h>

using namespace std;

int n;
int a[16][16];
int visited[16]={0};
int res=INT_MAX;
int way[10]={};
int bestway[10]={};
void init()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) cin >> a[i][j];
    }
}
bool checkz()
{
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            return false;
        }
    }
    return true;
}
void Try(int u,int cnt,int index)
{
    if(cnt<res)
    {
        if(checkz())
        {
            if(cnt+a[u][1])
            {
                res=a[u][1]+cnt;
                for(int i=1;i<=index;i++) bestway[i]=way[i];
            }
        }
        else
        {
            for(int i=1;i<=n;i++)
            {
                if(visited[i]==0 && u!=i)
                {
                    visited[i]=1;
                    way[index]=i;
                    Try(i,cnt+a[u][i],index+1);
                    visited[i]=false;
                }
            }
        }
    }
}
void in()
{
    visited[1]=true;
    way[1]=1;
    Try(1,0,2);
    cout << res << ".0\n";
    for(int i=1;i<=n;i++) cout << bestway[i] << " ";
    cout << 1;
}
int main()
{
    init();
    in();
    return 0;
}
