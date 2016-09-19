#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin>>n;
	char m[n][n];
	int score[n][n];
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cin>>m[i][j];
			score[i][j]=0;
		}
	}

	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(m[i][j]=='*') {
				continue;
			}

			// check vertical
			int ver_up=0,ver_down=0;
			for(int v=i-1;v>=0;v--) {
				if(m[v][j]=='.') ver_up++;
				else break;
			}
			for(int v=i+1;v<n;v++) {
				if(m[v][j]=='.') ver_down++;
				 else break;
			}
			
			// check horizontal
			int hor_left=0,hor_right=0;
			for(int h=j-1;h>=0;h--) {
				if(m[i][h]=='.') hor_left++;
				else break;
			}
			for(int h=j+1;h<n;h++) {
				if(m[i][h]=='.') hor_right++;
				else break;
			}


			score[i][j] = min(ver_up,ver_down);
			score[i][j] = min(score[i][j], hor_left);
			score[i][j] = min(score[i][j], hor_right);
			
			bool valid=true;
			int r=1;
			for(r=1;r<=score[i][j];r++) {
				for(int x=i-r;x<=i+r;x++) {
					for(int y=j-r;y<=j+r;y++) {

                        			float d=0.0;
						d=pow((x-i)*1.0,2.0)+pow((y-j)*1.0,2.0);
                        			float dr = pow(r*1.0,2.0);

						if(m[x][y]=='*' && d<=dr) {
							valid=false;
							break;
						}
					}
					if(valid==false) {
						break;
					}
				}
				if(valid==false) {
					break;
				}
			}
			if(valid==false) score[i][j] = r-1;
		}
	}

	int max_score=0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(max_score<score[i][j]) max_score=score[i][j];
		}
	}
	cout<<max_score<<endl;
	/*
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cout<<score[i][j]<<" ";
		}
		cout<<endl;
	}*/
	return 0;
}



