#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

typedef struct mpair {
	long long c1;
	long long c2;
} mpair;

bool cmp(mpair a, mpair b) {
	return a.c1<b.c1;
}

int main() {
	long long n,m,k,r,c1,c2;
	cin>>n>>m>>k;

	vector<mpair> a[n];
	for(long long i=0;i<k;i++) {
		cin>>r>>c1>>c2;
		if(a[r-1].size()==0) {
			mpair x;
			x.c1=c1;
			x.c2=c2;
			a[r-1].push_back(x);
		} else {
			bool inserted=false;
			mpair x;
			x.c1=c1;
			x.c2=c2;
			a[r-1].push_back(x);
			sort(a[r-1].begin(),a[r-1].end(),cmp);

			stack<mpair> s;
			s.push(a[r-1][0]);

			for(long long j=0;j<a[r-1].size();j++) {
				mpair top=s.top();
				if(top.c2<a[r-1][j].c1) s.push(a[r-1][j]);

				else if(top.c2<a[r-1][j].c2) {
					top.c2=a[r-1][j].c2;
					s.pop();
					s.push(top);
				}
			}

			vector<mpair> v;
			while(!s.empty()) {
				v.push_back(s.top());
				s.pop();
			}
			a[r-1] = v;
		}
	}

	long long count=0;
	for(long long i=0;i<n;i++) {
		if(a[i].size()==0) {
			count+=m;
		} else {
			long long c=0;
			for(long long j=0;j<a[i].size();j++) {
				c+=a[i][j].c2-a[i][j].c1+1;
			}
			count+=m-c;
		}
	}
	cout<<count<<endl;
	return 0;
}

