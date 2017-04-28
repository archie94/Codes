#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin>>n;

	long s[n];
	for(int i=0;i<n;i++) cin>>s[i];

	long h=s[0];
	long l=s[0];

	int cl=0;
	int ch=0;
	for(int i=1;i<n;i++) {
		if(l>s[i]) {
			l=s[i];
			cl++;
		}
		if(h<s[i]){
			h=s[i];
			ch++;
		}
	}

	cout<<ch<<" "<<cl<<endl;
	return 0;
}

