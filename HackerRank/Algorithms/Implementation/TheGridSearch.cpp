#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int R,r,C,c;
		cin>>R>>C;
		char G[R][C];
		for(int i=0;i<R;i++) {
			for (int j=0;j<C;j++) {
				cin>>G[i][j];
			}
		}
		cin>>r>>c;
		char P[r][c];
		for(int i=0;i<r;i++) {
			for(int j=0;j<c;j++) {
				cin>>P[i][j];
			}
		}

		bool found=false;
		for(int i=0;i<=R-r;i++) {
			for(int j=0;j<=C-c;j++) {
				bool flag=true;
				for(int l=0;l<r;l++) {
					for(int m=0;m<c;m++) {
						if(G[i+l][j+m]!=P[l][m]) {
							flag=false;
							break;
						}
					}
					if(!flag) break;
				}
				if(flag) {
					cout<<"YES"<<endl;
					found=true;
					break;
				}
			}
			if(found) break;
		}
		if(!found) cout<<"NO"<<endl;
	}
	return 0;
}
