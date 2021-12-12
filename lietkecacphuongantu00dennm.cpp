#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,m; cin >> n >> m;
    int a[1000];
    for(int i=1;i<=m;i++) a[i]=0;
    for(int i=m+1;i<=m+n;i++) a[i]=1;
    for(int i=1;i<=n+m;i++)
    {
        if(a[i]==0) cout << "H ";
        else cout << "V ";
    }
    cout << endl;
    while(1)
    {
        int i=n+m;
        while(i!=0 && a[i]==1)
        {
            a[i]=0;
            i--;
        }
        if(i==0) break;
        else a[i]=1;
        int dem=0;
        for(int x=1;x<=n+m;x++)
        {
            if(a[x]==0) dem++;
        }
        if(dem==m)
        {
            for(int j=1;j<=n+m;j++)
            {
                if(a[j]==0) cout << "H ";
        else cout << "V ";
            }
            cout << endl;
        }

    }
}
