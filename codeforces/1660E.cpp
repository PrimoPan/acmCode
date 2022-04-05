//This amazing code is written by Primo.Jay.Pan From CUC

//Any questions please contact me
//QQ:898021802
//Mail: primojpan@gmail.com
//.    primojaypan@cuc.edu.cn


// Untitled 5.txt
// Created by Primo Jay Pan on 2022/4/5.
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
#define maxn 200010


using namespace std;


//BIT
inline int lowbit(int x)
{
	return x&(-x);
}

//var

int T;


inline void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int lim=2*n+1;
	int lst=n;
	vector<int> f (3,0);
	vector<int> cnt (lim,0);
	f[lst%3]++;
	cnt[lst]++;
	ll ans=0;
	for (int i=0;i<n;i++)
	{
		int cur=lst;
		if (s[i]=='+')
		{
			f[cur%3]-=cnt[cur];//比cur小的不能用了
			cur++;
			ans+=f[cur%3];
			f[cur%3]++;
			cnt[cur]++;
		}
		else{
			cur--;
			f[cur%3]+=cnt[cur];//小于等于cur的都能用
			ans+=f[cur%3];
			f[cur%3]++;
			cnt[cur]++;
		}
		lst=cur;
	}
	cout<<ans<<endl;
}
//main
int main()
{
	//freopen("Untitled 5.txt.in","r",stdin);
	//freopen("Untitled 5.txt.out","w",stdout);
	cin>>T;
	while (T--)
	{
		solve();
	}
	return 0;
}



/*
Test Data1:
Test Data2:
*/