#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	string s[n];
	getchar();
	for(int i=0;i<n;i++) {
		cin>>s[i];
	}

	int maxTopic=0;
	int maxTeam=0;
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++){
			int topic=0;
			for(int k=0;k<m;k++) {
				if(s[i][k]=='1' || s[j][k]=='1') {
					topic++;
				}
			}
			if(topic>maxTopic) {
				maxTeam=1;
				maxTopic=topic;
			}else if(topic==maxTopic) {
				maxTeam++;
			}
		}
	}
	cout<<maxTopic<<endl<<maxTeam<<endl;
	return 0;
}

