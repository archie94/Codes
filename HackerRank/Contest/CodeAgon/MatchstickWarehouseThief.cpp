#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

typedef struct box {
	long long b;
	long long m;
} box;

bool cmpfunc( box a, box b) {
	if(a.m<b.m) return true;
	return false;
}

int main() {
	long long n,c;
	cin>>n>>c;
	box bb[c];
	for(long long i=0;i<c;i++) {
		cin>>bb[i].b>>bb[i].m;
	}
	
	sort(bb,bb+c,cmpfunc);

	//for(int i=0;i<c;i++) cout<<bb[i].b<< " "<<bb[i].m<<endl;
	long long sum=0;
	long long v=0;
	for(int i=c-1;i>=0;i--) {
		if(v+bb[i].b > n) {
			sum+=(n-v)*bb[i].m;
			v=n;
			//cout<<sum<<" "<<v<<endl;
			break;
		} else {
			sum+=bb[i].b*bb[i].m;
			v+=bb[i].b;
			//cout<<sum<<" "<<v<<endl;
		}
	}
	cout<<sum<<endl;
	return 0;
}
