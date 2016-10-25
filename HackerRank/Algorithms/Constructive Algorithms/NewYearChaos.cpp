#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];

		bool flag=true;
		int c=0;
		for(int i=n-1;i>=0;i--) {
			if(a[i]-(i+1)>2) {
				flag=false;
				break;
			} else {
				/*
				 * Since the question only asks the number 
				 * of bribes, there's no need to really do 
				 * a sorting, nor element swapping, nor 
				 * "bubbling up" an element. All you need 
				 * to do is to count the number of people 
				 * who overtake a person.
				 * Or a bubble sort will also do.
				 */
				for(int j=max(0,a[i]-2);j<i;j++) {
					if(a[j]>a[i]) c++;
				}
			}
		}
		if(flag) cout<<c<<endl;
		else cout<<"Too chaotic"<<endl;
	}
	return 0;
}

