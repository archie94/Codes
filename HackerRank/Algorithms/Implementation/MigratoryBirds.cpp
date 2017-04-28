#include <iostream>

using namespace std;

int main() {

	int n;
	int type[6]={0};
	cin>>n;
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		type[x]++;
	}
	int h=type[1];
	int p=1;
	for(int i=2;i<6;i++) {
		if(h<type[i]) {
			h=type[i];
			p=i;
		}

	}
	cout<<p<<endl;
	return 0;
}
