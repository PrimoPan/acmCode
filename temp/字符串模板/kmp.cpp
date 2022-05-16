#include<iostream>
#include<cstdio>
#include <cstring>
#include <algorithm>
#define maxn 1000005
using namespace std;
char s[maxn],s2[maxn];
int n,m,j;
int f[maxn];
inline void getf()
{
	f[0]=0;
	j=0;
	for (int i=1;i<m;i++)
	{
		while (j && s2[i]!=s2[j]) 
			j=f[j-1];
		if (s2[j]==s2[i]) j++;
		f[i]=j;
		}
}
inline void kmp()
{
	j=0;
	for (int i=0;i<n;i++)
	{
		while (j && s[i]!=s2[j]) j=f[j-1];
		if (s2[j]==s[i])j++;
		if (j==m)
		{
			cout<<i+2-j<<endl;
		}
	}
}
int main()
{
	scanf("%s",s);
	scanf("%s",s2);
	n=strlen(s);
	m=strlen(s2);
	getf();
	kmp();
	for (int i=0;i<m;i++) cout<<f[i]<<" ";
	cout<<endl;
	return 0;
}
