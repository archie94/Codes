#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long ll;

ll arr[1000000];
ll lpd[1000000];// keep max LPD of each section of a[]
ll lpr[1000000];// store range

// marks all mutiples of 'a' ( greater than 'a' but less than equal to 'n') as 1.
void markMultiples(ll a, ll n)
{
    ll i = 2, num;
    while ( (num = i*a) <= n )
    {
        arr[ num-1 ] = 1; // minus 1 because index starts from 0.
        ++i;
    }
}

// A function to print all prime numbers smaller than n
void SieveOfEratosthenes(ll n)
{
    // There are no prime numbers smaller than 2
    if (n >= 2)
    {
        // Create an array of size n and initialize all elements as 0
        ll i;
        //memset(arr, 0, sizeof(arr));

        /* Following property is maintained in the below for loop
           arr[i] == 0 means i + 1 is prime
           arr[i] == 1 means i + 1 is not prime */
        for (i=1; i<n; ++i)
        {
            if ( arr[i] == 0 )
            {
                //(i+1) is prime, print it and mark its multiples
                //printf("%d ", i+1);
                markMultiples(i+1, n);
            }
        }
    }
}

ll LPD(ll n) {
	ll res = 1;
	if(!arr[n-1]) return n;
	for(ll i=1;i<n;i++) {
		if(!arr[i] && n%(i+1)==0) return i+1;
	}
	return 1;
}

void updateLPD(ll *a,ll len,ll n) {
	for(ll i=0;i<n;i++) {
		lpd[i/len]=max(lpd[i/len],LPD(a[i]));
		lpr[i/len]=i;
	}
}

int main() {
	int t;
	cin>>t;
	for(ll i=0;i<1000000;i++) arr[i]=0;

	SieveOfEratosthenes(1000001);
	while(t--) {
		ll n,m;
		cin>>n>>m;
		ll a[n];
		for(ll i=0;i<n;i++) {
			cin>>a[i];
		}

		// Square root optimisation
		ll len=sqrt(n*1.0);
		//cout<<len<<endl;
		for(ll i=0;i<1000000;i++) lpd[i]=0;
		updateLPD(a,len,n);

		ll l,r,type;
		for(ll i=0;i<m;i++) {
			cin>>type>>l>>r;
			if(!type) {
				for(ll j=l-1;j<r;j++) {
					a[j]=a[j]/LPD(a[j]);
				}
				updateLPD(a,len,n);
				/*cout<<endl;
				for(ll j=0;j<n;j++) {
					cout<<a[j]<<" ";
				}
				cout<<endl;*/
			} else {
				ll result=1;
				/*
				for(ll j=l-1;j<r;j++) {
					if(result<LPD(a[j])) {
						result=LPD(a[j]);
					}
				}*/
				l--;
				r--;
				for(ll j=l;j<=r;) {
					if(j%len==0 && j+len<=r) {
						if(result<lpd[j/len]) {
							result=lpd[j/len];
						}
						j+=len;
					} else {
						ll thr=LPD(a[j]);
						if(result<thr) result=thr;
						j++;
					}
				}
				
				cout<<result<<" ";
				//cout<<result<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}

