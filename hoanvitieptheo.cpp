#include<bits/stdc++.h>

using namespace std;
int n,k,a[1000],ok;
void ktao()
{
    for(int i=1;i<=n;i++) cin >> a[i];
}
void sinh()
{
    int i=n-1;
    while(i!=0 && a[i]>a[i+1])
    {
        i--;
    }
    if(i==0)
    {
        ok=0;
    }
    else
    {
        int j=n;
        while(a[j]<a[i])
        {
            j--;
        }
        swap(a[i],a[j]);
        int l=i+1,r=n;
        while(l<r)
        {
            swap(a[l],a[r]);
            l++;r--;
        }
    }
}
int main()
{
    cin >> n >> k; 
    ktao();
    sinh();
    int x=0;
    while(x<k)
    {
        for(int i=1;i<=n;i++) cout << a[i] << " ";
        cout << endl;
        sinh();
        x++;
    }
}
