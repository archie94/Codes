#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int merge(int *a,int *temp,int start,int mid,int end) {
	int i,j,k,inv_count=0;

	i=start;
	j=mid;
	k=start;

	while( (i<=mid-1) && (j<=end) ) {
		if(a[i]<=a[j]) {
			temp[k++]=a[i++];
		} else {
			temp[k++]=a[j++];

			inv_count += (mid-i);
		}
	}

	while(i<=mid-1) {
		temp[k++]=a[i++];
	}
	while(j<=end){
		temp[k++]=a[j++];
	}

	for(i=start;i<=end;i++) {
		a[i]=temp[i];
	}

	return inv_count;
}

int mergeSort(int *a,int *temp,int start,int end) {
	int mid,inv_count=0;
	if(start<end) {
		mid = (start+end)/2;

		inv_count = mergeSort(a,temp,start,mid);
		inv_count += mergeSort(a,temp,mid+1,end);

		inv_count += merge(a,temp,start,mid+1,end);
	}
	return inv_count;
}

int getInversion(int *a,int n) {
	int temp[n];
	return mergeSort(a,temp,0,n-1);
}

int main() {
	int t,n,i;
	cin>>t;
	while(t--) {
		cin>>n;
		string s[n];
		int a[n];
		map<string,int> m;
		for(i=0;i<n;i++) {
			cin>>s[i];
			m[s[i]] = i;
		}
		
		for(i=0;i<n;i++) {
			string ss;
			cin>>ss;
			a[i] = m[ss];
		}

		int ans=getInversion(a,n);
		cout<<ans<<endl;
	}
	return 0;
}

