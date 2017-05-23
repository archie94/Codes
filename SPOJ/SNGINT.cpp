// http://www.spoj.com/problems/SNGINT/

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		long n;
		cin>>n;
		if(!n) {
			cout<<10<<endl;
			continue;
		}

		if(n==1) {
			cout<<1<<endl;
			continue;
		}

		bool found=false;
		vector<long> f;
		long p=1;
		long m=n;
		long start=9;
		f.clear();

		while(p<n) {

			bool divided=false;
			for(long i=start;i>1;i--) {
				if(m%i==0) {
					m/=i;
					f.push_back(i);
					p*=i;
					divided=true;
					break;
				}
			}
			//cout<<f.size()<<endl;
			//cout<<p<<endl;

			if(divided) {
				start=9;
			} else if(!divided && f.size()>0) {
				//cout<<"trace"<<endl;
				start=f.back();
				p/=start;
				f.pop_back();
			} else {
				//cout<<"breaking"<<endl;
				break;
			}
		}

		//cout<<"yo"<<endl;
		if(p!=n) {
			cout<<-1<<endl;
			continue;
		}
			
		sort(f.begin(),f.end());
		for(long i=0;i<f.size();i++) {
			cout<<f[i];
		}
		cout<<endl;
	}
	return 0;
}

