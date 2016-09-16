#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int c;
		int score[n];
		for(int i=0;i<n;i++) {
			score[i]=0;
		}

		int type[7];
		for(int i=0;i<n;i++) {
			for(int j=0;j<7;j++) {
				type[j]=0;
			}
			cin>>c;
			score[i]=c;
			for(int j=0;j<c;j++) {
				int x;
				cin>>x;
				type[x]++;
			}
			int cnt=0;
			do {
				cnt=0;
				for(int j=1;j<7;j++) {
					if(type[j]) {
						cnt++;
					}
				}
				if(cnt==6) {
					score[i]+=4;
				} else if(cnt==5) {
					score[i]+=2;
				} else if(cnt==4) {
					score[i]+=1;
				}
				for(int j=1;j<7;j++) {
					if(type[j]) {
						type[j]--;
					}
				}
			}while (cnt>3);
		}
		int winner=0;
		int max_score=score[0];
		bool tie=false;
		for(int i=1;i<n;i++) {
			if(max_score<score[i]) {
				max_score=score[i];
				winner=i;
				tie=false;
			} else if(max_score==score[i]) {
				tie=true;
			}
		}
		if(tie) {
			cout<<"tie"<<endl;
		} else if(winner==0) {
			cout<<"chef"<<endl;
		} else {
			cout<<winner+1<<endl;
		}
	}
	return 0;
}

