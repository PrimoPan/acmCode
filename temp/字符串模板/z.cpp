#include <cstring>
#include <cstdio>
#include <algorithm>
#include <string>
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;



vector<int> z_function(string s) {
	int n = (int)s.length();
	vector<int> z(n);
	z[0]=n;
	for (int i = 1, l = 0, r = 0; i < n; ++i) {
		if (i <= r && z[i - l] < r - i + 1) {
			z[i] = z[i - l];
		} else {
			z[i] = max(0, r - i + 1);
			while (i + z[i] < n && s[z[i]] == s[i + z[i]]) ++z[i];
		}
		if (i + z[i] - 1 > r) l = i, r = i + z[i] - 1;
	}
	return z;
}


int main()
{
	string T;
	string S;
	cin>>T;
	cin>>S;
	string G=T+'#'+S;
	int sz=G.length();
	vector<int> d=z_function(G);
	for (int i=0;i<d.size();i++)
		cout<<d[i]<<" ";
	puts("");
}