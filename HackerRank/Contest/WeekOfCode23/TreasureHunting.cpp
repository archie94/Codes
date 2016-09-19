#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double a,b,x,y;
	cin>>x>>y;
	cin>>a>>b;

	double k=0.0,n=0.0;
	k = (a*x*1.0 + b*y*1.0)/(a*a*1.0 + b*b*1.0);
	n = (k*a - x*1.0)/(b*1.0);
	cout<<fixed<<setprecision(12)<<k<<endl;
	cout<<fixed<<setprecision(12)<<n<<endl;
	return 0;
}
