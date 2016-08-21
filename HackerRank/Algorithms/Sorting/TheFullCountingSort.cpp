#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;

typedef struct input {
	long x;
	string s;
	long idx;
} input;

bool cmp(input a,input b) {
	if(a.x<b.x) return true;
	return false;
}

int main() {
	long n;
	cin>>n;
	input a[n];
	for(long i=0;i<n;i++) {
		int x;
		cin>>x;
		getchar();
		string s;
		cin>>s;
		getchar();
		a[i].x=x;
		a[i].s=s;
		a[i].idx=i;
	}

	stable_sort(a,a+n,cmp); // imp -- maintain relative order 
	//cout<<"----------------------"<<endl;
	//for(long i=0;i<n;i++) {
	//	cout<<a[i].x<<" "<<a[i].s<<endl;
	//}
	
	for(long i=0;i<n;i++) {
		if(a[i].idx>=n/2) {
			cout<<a[i].s<<" ";
		} else {
			cout<<"-"<<" ";
		}
	}
	cout<<endl;
	return 0;
}

