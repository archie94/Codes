#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>

typedef long long ll;

using namespace std;

// return true if first is winner
// else return false
bool isWinner(ll n, ll *s, int m, bool first) {
	bool divided=false;
	for(int i=0;i<m;i++) {
		if(n%s[i]==0) {
			divided=true;
			if(isWinner(n/s[i], s, m, !first)==first) return first;
			else if(first==false) return true;
		}
	}
	if(!divided && first) return false;
	else if(!divided && !first) return true;

	else if(divided && first) return false;
	else return true;
}

int main() {
	ll n;
	int m;
	cin>>n>>m;
	ll s[m];
	for(int i=0;i<m;i++) cin>>s[i];

	if(isWinner(n,s,m,true)) cout<<"First"<<endl;
	else cout<<"Second"<<endl;
	return 0;
}

