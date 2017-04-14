#include <iostream>
#include <algorithm>
#include <utility>
#include <stdio.h>
#include <cstring>
#include <vector>
using namespace std;

bool desc(pair<long long,int> c,pair<long long,int> d) {
	return c.first>d.first;
}

int main() {
	int n;
	cin>>n;
	pair<long long,int> a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i].first;
		a[i].second=i; //save position of element in initial array
	}
	
	sort(a,a+n);
	bool vis[n];
	memset(vis,false,n);

	long long swap1=0;
	for(int i=0;i<n;i++) {

		// skip if already visited or not swapped at all
		if(vis[i] || a[i].second==i) continue;

		long long cycle_size=0;
		int j=i;
		while(!vis[j]) {
			vis[j]=true;

			j=a[j].second;
			cycle_size++;
		}
		swap1 += (cycle_size-1);
	}

	sort(a,a+n,desc);
	memset(vis,false,n);

	long long swap2=0;
	for(int i=0;i<n;i++) {

		// skip if already visited or not swapped at all
		if(vis[i] || a[i].second==i) continue;

		long long cycle_size=0;
		int j=i;
		while(!vis[j]) {
			vis[j]=true;

			j=a[j].second;
			cycle_size++;
		}
		swap2 += (cycle_size-1);
	}

	long long swap=swap1<swap2?swap1:swap2;
	cout<<swap<<endl;
	return 0;
}


