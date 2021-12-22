#include<bits/stdc++.h>

using namespace std;
int kt(int n)
{
	string s=to_string(n);
	for(int i=0;i<=s.length()/2;i++){
		if(s[i]!=s[s.length()-i-1]) return 0;
	}
	return 1;
}
int main(){
	int dem=0;
	int a,b; cin >> a >> b;
	for(int i=a;i<=b;i++)
	{
		if(kt(i)==1) dem++;
	}
	cout << dem;
	return 0;
}
