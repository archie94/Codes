#include <iostream>

using namespace std;

int main() {
	int s,t,a,b,m,n;

	cin>>s>>t>>a>>b>>m>>n;

	int ad[m];
	for(int i=0;i<m;i++) cin>>ad[i];
	int od[n];
	for(int i=0;i<n;i++) cin>>od[i];

	for(int i=0;i<m;i++) ad[i]+=a;
	for(int i=0;i<n;i++) od[i]+=b;

	int ac=0,oc=0;
	for(int i=0;i<m;i++) if(ad[i]>=s && ad[i]<=t) ac++;
	for(int i=0;i<n;i++) if(od[i]>=s && od[i]<=t) oc++;

	cout<<ac<<endl<<oc<<endl;
	return 0;
}
