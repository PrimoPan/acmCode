//This amazing code is written by Primo.Jay.Pan From CUC

//Any questions please contact me
//QQ:898021802
//Mail: primojpan@gmail.com
//.    primojaypan@cuc.edu.cn


// Codeforces 24D
// Created by Primo Jay Pan on 2022/3/19.
//While (true) RP++;


//head
#include <iostream>
#include <algorithm>
#include <bitset>
#include <complex>
#include <cstdio>
#include <csignal>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <iomanip>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define INF 0x3f3f3f3f
#define maxlongint 2147483647
#define maxint 32767
#define pi(double)acos(-1.0)
#define eps 1e-9
#define MID ((l+r)>>1)
#define lson (o<<1)
#define rson (o<<1|1)
//clear the array
#define cla(a) memset(a,0,sizeof(a))
#define clb(a) memset(a,INF,sizeof(a))
#define clc(a) memset(a,-1,sizeof(a))
#define maxn 1005


using namespace std;


//BIT
inline int lowbit(int x)
{
	return x&(-x);
}

//var
double f[maxn],a[maxn][maxn],b[maxn];
int n,m,x,y;

void gauss()
{
	for (int i=1;i<m;i++)
	{
		double rt=a[i+1][i]/a[i][i];
		a[i+1][i]-=rt*a[i][i];
		a[i+1][i+1]-=rt*a[i][i+1];
		b[i+1]-=rt*b[i];
	}
	f[m]=b[m]/a[m][m];
	for (int i=m-1;i>=1;i--)
	{
		f[i]=(b[i]-f[i+1]*a[i][i+1])/a[i][i];
	}
}
//main
void print()
{
	for (int i=1;i<=m;i++){
		
		printf("%.2lf ",b[i]);
	}
	puts("");
}
int main()
{
	//freopen("Untitled.txt.in","r",stdin);
	//freopen("Untitled.txt.out","w",stdout);
	ios::sync_with_stdio(false);
	cin>>n>>m>>x>>y;
	if (m==1)
	{
		double ans= (double) (n-x) *2;
		cout<<ans<<endl;
		return 0;
	}
	for (int i=n-1;i>=x;i--)
	{
		a[1][1]=(double)-2/3;
		a[1][2]=(double)1/3;
		a[m][m-1]=(double)1/3;
		a[m][m]=(double)-2/3;
		b[1]=(double)((double)-1/3)*f[1]-1;
		b[m]=(double)((double)-1/3)*f[m]-1;
		for (int j=2;j<m;j++)
		{
			a[j][j-1]=a[j][j+1]=(double)1/4;
			a[j][j]=(double)-3/4;
			b[j]=(double)((double)-1/4)*f[j]-1;
		}
		gauss();
	
	}
	
	cout<<setprecision(10)<<f[y]<<endl;
	return 0;
}



/*
Test Data1:
Test Data2:
*/