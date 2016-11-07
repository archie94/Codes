#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

typedef long long ll;


int main() {
	int q;
	cin>>q;
	while(q--) {
		ll a,b,d;
		cin>>a>>b>>d;

		ll x=0,y=0;
		ll steps=0;
		
		
		while(x<d) {
			//cout<<a<<" "<<b<<endl;
			//cout<<x<<" "<<steps<<endl;
			if(x+a+b>d || x+b+b>d || x+a+a>d) {
				if(x+a==d || x+b==d) {
					steps++;
					break;
				}
				steps+=2;
				break;
			}
			else if(x+b<=d) {
				x+=b;
				steps++;
			} else if(x+a<=d) {
				x+=a;
				steps++;
			}  else {
				x-=a;
				steps++;
			}
		}

		cout<<steps<<endl;
	}
	return 0;
}


