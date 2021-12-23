#include<bits/stdc++.h>

using namespace std;

int main()
{
	int dem=0;
	for(int i=1;i<=10000;i++)
	{
		if(i%2==0 && i%3==0) dem++;
	}
	cout << dem;
}
