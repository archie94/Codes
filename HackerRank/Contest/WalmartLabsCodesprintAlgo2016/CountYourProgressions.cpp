#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

#define MOD 1000000009
#define MAX 200001

int n;
long long ans=0;
int a[MAX];
bool v[MAX];

bool isAP(vector<int> &seq) {
	int size=seq.size();
	if(size==0 || size==1) return true;
	/*
	if(seq[1]-seq[0] == seq[size-1]-seq[size-2]) return true;
	return false;
	*/
	int diff=seq[1]-seq[0];
	for(int i=0;i<size-1;i++) if(seq[i+1]-seq[i]!=diff) return false;
	return true;
}

void subsets(int i) {
	if(i==n) {
		vector<int> seq;
		for(int j=0;j<n;j++) {
			if(v[j]) seq.push_back(a[j]);
		}
		if(isAP(seq)) {
			ans=(ans+1)%MOD;
			/*
			for(int j=0;j<seq.size();j++) cout<<seq[j]<<" ";
			cout<<endl;
			*/
		}
	} else {
		v[i]=true;
		subsets(i+1);
		v[i]=false;
		subsets(i+1);
	}
}

void findMore(int start, int diff, vector<int> &res) {
	for(int k=start+1;k<n;k++) {
		int step=a[k]-res[res.size()-1];
		res.push_back(a[k]);

		if(step==diff) {
			ans=(ans+1)%MOD;
			for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
			cout<<endl;
			findMore(k,diff,res);
		} else if(step>diff) {
			return;
		}
	}
}


void findPairs(int start) {
	vector<int> res;
	res.push_back(a[start]);
	for(int j=start+1;j<n;j++) {
		res.push_back(a[j]);
		int diff=a[1]-a[0];
		ans=(ans+1)%MOD;
		for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
		cout<<endl;
		findMore(j,diff,res);
	}
}

int main() {
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];

	//subsets(0);
	/*
	for(int i=0;i<n-1;i++) {
		findPairs(i);
	}
	*/
	ans++;//null set
	ans+=n;// set of length 1
	ans=(ans + (((n*(n-1))%MOD)/2)%MOD);
	

	/*
	for(int j=n-2;j>=1;j--) {
		int i=j-1;
		int k=j+1;

		while(i>=0 && k<=n-1) {
			if(a[i]+a[k]<2*a[j]) k++;
			else if(a[i]+a[k]>2*a[j]) i--;
			else {
				ans=(ans+1)%MOD;
				k++;
				i--;
			}
		}
	}*/

	int i,j=0;
	for(i=0;i<n && j<n;) {
		j=i+2;
		int diff=a[j-1]-a[i];
		int k=0;
		bool ok=false;
		while(j<n && a[j]-a[j-1]==diff) {
			ok=true;
			k++;
			i=j;
			j++;
			ans = (ans+k)%MOD;
		}
		if(!ok) i++;
	}


	cout<<ans<<endl;
	return 0;
}

