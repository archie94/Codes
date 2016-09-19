#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		char w[101];
		cin>>w;

		// next permutation algorithm
		
		// find the longest non-increasing suffix
		int i=strlen(w)-1;
		while(i>0 && w[i-1]>=w[i]) { i--; }
		// i is now the head of suffix

		// Are we at the last permutation already?
		if(i<=0) {
			cout<<"no answer"<<endl;
			continue;
		}


		// let w[i-1] be pivot
		// find rightmost element that exceeds pivot
		int j=strlen(w)-1;
		while(w[j]<=w[i-1]) { j--; }

		// now w[j] will become new pivot 
		char ch=w[j];
		w[j]=w[i-1];
		w[i-1]=ch;

		// reverse the suffix
		j=strlen(w)-1;
		while(i<j) {
			ch=w[i];
			w[i]=w[j];
			w[j]=ch;
			i++;
			j--;
		}

		cout<<w<<endl;
	}
	return 0;
}

