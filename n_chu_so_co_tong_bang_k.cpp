#include<bits/stdc++.h>

using namespace std;
int kt(long long x)
{
	int dem=0;
	while(x!=0)
	{
		dem+=x%10;
		x/=10;
	}
	return dem;
}
int main()
{
	long long n, m,k;
	cin >> n >> m >> k;
	long long res=0;
	for(long long i=n;i<=m;i++)
	{
		if(kt(i)==k) res++;
	}
	cout << res;
}
