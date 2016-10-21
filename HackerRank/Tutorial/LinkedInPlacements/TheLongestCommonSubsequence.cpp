#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	
	int lcs[n+1][m+1];
	for(int i=0;i<=n;i++) {
		for(int j=0;j<=m;j++) {
			if(i==0 || j==0) {
				lcs[i][j]=0;
			} else if(a[i-1]==b[j-1]) {
				lcs[i][j]=lcs[i-1][j-1]+1;
			} else {
				lcs[i][j]=max(lcs[i][j-1],lcs[i-1][j]);
			}
		}
	}

	int j=m;
	int i=n;
	int k=lcs[n][m];
	int ans[k];
	//cout<<k<<endl;
	
	while(i>=1 && j>=1) {
		if(a[i-1]==b[j-1]) {
			ans[--k]=a[i-1];
			i--;
			j--;
		} else if(lcs[i-1][j]>lcs[i][j-1]) {
			i--;
		} else {
			j--;
		}
	}

	k=lcs[n][m];
	for(i=0;i<k;i++) cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}

