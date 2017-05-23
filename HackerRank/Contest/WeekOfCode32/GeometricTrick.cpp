#include <string>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	string s;
	cin>>n;
	cin>>s;

	int x[n];
	int y[n];
	int z[n];

	int c=0;
	for(int i=0;i<n;i++) {
		if(s[i]=='a') {
			for(int j=0;j<n;j++) {
				if(s[j]=='b') {
					int k = pow(j+1,2)/(i+1);
					if(s[k-1]=='c' && pow(j+1,2)==((i+1)*(k+1)) ) {
						x[c]=i;y[c]=j;z[c]=k-1;
						c++;
					}	
				}
			}
		}
	}

	cout<<c<<endl;
	return 0;
}

