#include <iostream>
#include <algorithm>

using namespace std;

long long merge(long long *a,long long *t,long long l,long long m,long long r){
	long long i,j,k,inv=0;

	i=l;
	j=m;
	k=l;
	while( (i<=m-1) && (j<=r) ) {
		if(a[i]<=a[j]) {
			t[k++]=a[i++];
		} else {
			t[k++]=a[j++];

			inv+=(m-i);
		}
	}

	while(i<=m-1){
		t[k++]=a[i++];
	}
	while(j<=r){
		t[k++]=a[j++];
	}

	for(i=l;i<=r;i++){
		a[i]=t[i];
	}

	return inv;
}

long long mergeSort(long long *a,long long *temp,long long left,long long right){
	long long i,j,mid;
	long long inv=0;
	if(left<right) {
		mid = left+(right-left)/2;

		inv = mergeSort(a,temp,left,mid);
		inv += mergeSort(a,temp,mid+1,right);
		
		inv += merge(a,temp,left,mid+1,right);
	}
	return inv;
}

long long getInv(long long *a,long long n) {
	long long  temp[n];
	return mergeSort(a,temp,0,n-1);
}

int main() {
	long long t,n;
	cin>>t;
	while(t--) {
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];

		long long ans=getInv(a,n);
		cout<<ans<<endl;
	}
	return 0;
}

