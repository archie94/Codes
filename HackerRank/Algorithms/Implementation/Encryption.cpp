#include <string>
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	string s;
	int l,row,col,i,j,k;
	cin>>s;
	l=s.size();
	row=(int)(floor(sqrt(l)));
	col=(int)(ceil(sqrt(l)));

	if(row*col<l) {
		row=col;
	}

	k=0,j,i;

	for(j=0;j<col;j++) {
		for(i=0;i<row;i++) {
			int idx = j+(i*col);
			if(idx<l) {
				cout<<s[idx];
			}
		}
		cout<<" ";
	}

	cout<<endl;
	return 0;
}
