//This amazing code is written by Primo.Jay.Pan From CUC

//Any questions please contact me
//QQ:898021802
//Mail: primojpan@gmail.com
//.    primojaypan@cuc.edu.cn


// Untitled 2.txt
// Created by Primo Jay Pan on 2022/3/20.
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
#define maxn 100005



using namespace std;


//BIT
inline int lowbit(int x)
{
	return x&(-x);
}

//var

#define N 2005
int T;


inline void solve()
{
	
	string s;
	ll ans=INF;
	int n;
	cin>>n;
	vector<int> sum (n,0);
	int cnt=0;
	for (int i=0;i<n;i++)
	{
		cin>>s;
		for (int j=0,k=(n-i)%n;j<n;j++,k=((k+1)==n)?0:k+1)
		{
			
			if (s[j]=='1'){
			cnt++;
			sum[k]++;
			//cout<<"debug"<<j<<" "<<k<<endl;
			}
		}
	}
	for (int i=0;i<n;i++)
	{
		ans=min(ans,(ll)cnt-sum[i]+n-sum[i]);
	}
	cout<<ans<<endl;
	
}
int main()
{
	cin>>T;
	while (T--)
	{
		solve();
	}
}



/*
Test Data1:
Test Data2:
*/