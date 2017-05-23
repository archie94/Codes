#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;


long long g, seed, p, n, r0, s, t;

long long time(long long *dp, long long *r, long long jen, long long fnd,  long long sec) {
    if(dp[jen]!= -99) {
        //cout<<"Returning at begin "<<dp[jen]<<endl;
        return dp[jen];
    }
	if(jen==fnd) {
        dp[jen] = sec;
        //cout<<"Returning at begin success "<<dp[jen]<<endl;
		return dp[jen];
	}
	if(r[jen]==0) {
        dp[jen]==-1;
        //cout<<"Returning at begin "<<dp[jen]<<endl;
		return dp[jen];
	}

    if(dp[jen]==-100) {
        dp[jen]=-1;
        //cout<<"Returning at begin will not calc again "<<dp[jen]<<endl;
        return dp[jen];
    }
    // here dp[jen] must be -99
    dp[jen] = -100;
    
	long long pos[2*r[jen]+1];
	long long k=0;
	for(long long i=1;i<=r[jen];i++) {
		pos[k] = (jen+i)%n;
		//cout<<pos[k]<<endl;
		k++;
	}
	for(long long i=1;i<=r[jen];i++) {
		pos[k] = (jen-i);
		if(pos[k]<0) pos[k] = n+pos[k];
		//cout<<pos[k]<<endl;
		k++;
	}

	long long timearr[k];
	for(long long i=0;i<k;i++) {
		timearr[i] = time(dp, r, pos[i], fnd, sec+1);
	}

	long long min;
	long long c=0;
	for(long long i=0;i<k;i++) {
		if(timearr[i]!=-1 && timearr[i]!=-100 && timearr[i]!=-99) {min=timearr[i]; break;}
		c++;
	}
    if(c==k) {
        dp[jen]=-1;
        //cout<<"Returning "<<dp[jen]<<endl;
        return dp[jen];
    }
	for(long long i=0;i<k;i++) if(min>timearr[i] && timearr[i]!=-1 && timearr[i]!=-100 && timearr[i]!=-99) min=timearr[i];
    
    dp[jen]=min;
    //cout<<"Returning "<<dp[jen]<<endl;
	return dp[jen];
}

int main() {
	cin>>n>>s>>t;
	cin>>r0>>g>>seed>>p;

	long long r[n];
    	long long dp[n];
    	for(long long i=0;i<n;i++)
        	dp[i]=-99;
	
	r[0]=r0;
	for(long long i=1;i<n;i++) {
		r[i] = (r[i-1]*g+seed)%p;
	}

	long long sec=0;
	
	cout<<time(dp, r, s, t, sec);
	return 0;
}

