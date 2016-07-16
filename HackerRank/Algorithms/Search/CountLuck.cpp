#include <iostream>

using namespace std;

char s[101][101];
int n,m;
int dx[]={1,-1,0,0};
int dy[]={0,0,-1,1};
int count;

bool isSafe(int i,int j) {
	return i>=0 && i<n && j>=0 && j<m;
}

int floodFill(int i,int j,int pI=-1,int pJ=-1) {
	if(s[i][j]=='*') return 1;
	
	int cc=0;
	int f1=0;
	for(int l=0;l<4;l++) {
		int nI = i+dx[l];
		int nJ = j+dy[l];

		if(!isSafe(nI,nJ)) continue;

		if(nI==pI && nJ==pJ) continue;// dont return to visited cell

		if(s[nI][nJ]=='X') continue;

		if(floodFill(nI,nJ,i,j)) {
			f1=1;
		}
		cc++;
	}
	if(f1 && cc>1) {
		count++;
	}
	return f1;
}

int main() {
	int k,t;

	cin>>t;
	while(t--) {
		cin>>n>>m;
		
		int i,j,k;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)
				cin>>s[i][j];
		}
		cin>>k;

		int startR;
		int startC;
		for(i=0;i<n;i++) {
			for(j=0;j<m;j++){
				if(s[i][j]=='M'){
					startR=i;
					startC=j;
				}
			}
		}
		
		count=0;
		floodFill(startR,startC);
		if(count == k ) {
			cout<<"Impressed"<<endl;
		}else {
			cout<<"Oops!"<<endl;
		}
	}
	return 0;
}

