#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x1,x2,v1,v2;
	cin>>x1>>v1>>x2>>v2;

	int x=x1-x2;
	int v=v2-v1;

	if(v!=0) {
		if(x*v<0) {
			cout<<"NO"<<endl;
		} else if(x%v==0) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	} else {
		if(x==0) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}

	return 0;
}
