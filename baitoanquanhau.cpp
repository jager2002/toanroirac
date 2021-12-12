#include<bits/stdc++.h>

using namespace std;

int n,a[1000],c[1000],d1[1000],d2[1000];

void in()
{
    for(int i=1;i<=n;i++) cout << a[i] << " ";
    cout << endl;
}
void Try(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(c[j]==0 && d1[i-j+n]==0 && d2[i+j-1]==0)
        {
            a[i]=j;
            c[j]=d1[i-j+n]=d2[i+j-1]=1;
            if(i==n) in();
            else Try(i+1);
            c[j]=d1[i-j+n]=d2[i+j-1]=0;
        }
    }
}
int main()
{
    cin >> n;
    Try(1);
}
