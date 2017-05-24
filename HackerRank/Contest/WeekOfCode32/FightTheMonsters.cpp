#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	long long n, hit, t;
	cin>>n>>hit>>t;
	long long h[n];
	for(int i=0;i<n;i++) cin>>h[i];

	sort(h,h+n);
	long long k=0;
    	long long i=0;
    	long long ans=0;
	for(;i<n;i++) {
		long long rt=h[i]/hit;
       	 	if(rt*hit<h[i]) {
            		++rt;
        	}
        	t-=rt;
		if(t<0) {
			break;
		}
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
