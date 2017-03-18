#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;

		// look for the smallest multiple of 5(p)
		// and largest multiple of 3(q)
		// such that p+q=n
		
		int p=n;
		int q=0;
		while(p%3!=0) {
			/*
			 * if p is not divisible by 3 we must have 1 or 2 as
			 * remainders, 
			 * when we subtract by 5 the remaining num must be a 
			 * multiple of 3 and the subtracted part has to be 
			 * multiple of 5 since we are subtracting by 5
			 */
			p-=5;
			q+=5;
		}
		if(p<0) {
			cout<<"-1"<<endl;
		} else {
			for(int i=0;i<p;i++) cout<<"5";
			for(int i=0;i<q;i++) cout<<"3";
			cout<<endl;
		}
	}
	return 0;
}

