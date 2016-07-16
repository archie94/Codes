#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>

using namespace std;

int count;
int a[11][11];

void floodFill(int m,int n,int i,int j) {
	if(i<0 || i>=m || j<0 || j>=n) return;
	if(a[i][j]!=1) return;

	count++;
	a[i][j] = count;

	floodFill(m,n,i+1,j);
	floodFill(m,n,i-1,j);
	floodFill(m,n,i,j+1);
	floodFill(m,n,i,j-1);

	floodFill(m,n,i+1,j+1);
	floodFill(m,n,i+1,j-1);
	floodFill(m,n,i-1,j+1);
	floodFill(m,n,i-1,j-1);

}

int main() {
	int n,m;
	int i,j,k;
	scanf("%d",&m);
	scanf("%d",&n);
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	
	int max = 0;
	count=1;
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			if(a[i][j]==1) {
				if(count!=1) {
					count = 1;
				}
				floodFill(m,n,i,j);
			}
		}
	}

	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			if(a[i][j]>max) {
				max = a[i][j];
			}
			//cout<<a[i][j]<<" ";
		}
		//cout<<endl;
	}

	cout<<max-1<<endl;
	return 0;
}

