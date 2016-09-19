#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

#define MOD 1000000007
using namespace std;

void lpsArray(string s,long long n,long long *lps) {
	long long len=0;
	long long i;

	lps[0]=0;
	i=1;

	while(i<n) {
		if(s[i]==s[len]) {
			len++;
			lps[i]=len;
			i++;
		} else {
			if(len) {
				len=lps[len-1];
			} else {
				lps[i]=0;
				i++;
			}
		}
	}
}

int main() {
	string s;
	long long m;
	cin>>s;
	cin>>m;

	long long n=s.length();
	long long lps[n];

	lpsArray(s,n,lps);

	long long len=lps[n-1];

	if(len>0 && n%(n-len)==0) {
		len=(n-len);
	} else {
		len=n;
	}

	//cout<<len<<endl;
	cout<<(m/len)%MOD<<endl;
	return 0;
}
