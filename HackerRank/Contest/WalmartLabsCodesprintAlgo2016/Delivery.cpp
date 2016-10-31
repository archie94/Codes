#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define N 100001
#define M 10001
#define INF 1000ll*1000ll*1000ll*1000ll*1000ll

typedef long long ll;

vector<int> rests[M];
ll dp[N]; // answer will be sum of least distance per query.

/*
 * Calc dist by making u=v ultimately.
 * Divide the greater of u and v by 2 and add 1 to dist (since we are going up a level)
 */
int calcDist(int u, int v) {
	if(u==v) return 0;

	if(u<v) return calcDist(u,v/2)+1;
	return calcDist(u/2,v)+1;
}

int main() {
	int n,m,q;
	int rest;
	cin>>n>>m>>q;
	for(int i=0;i<m;i++) {
		cin>>rest; // no of restaurants that make food of type i+1
		for(int j=0;j<rest;j++) {
			int r;
			cin>>r;
			rests[i+1].push_back(r);
		}
	}

	int currNode, prevNode, foodNode;
	int foodType;

	prevNode=1;
	dp[0]=0;
	for(int i=1;i<=q;i++) {
		cin>>foodType>>currNode;
		dp[i]=INF;

		for(int j=0;j<rests[foodType].size();j++) {
			foodNode=rests[foodType][j];

			int new_dp=dp[i-1]+calcDist(prevNode, foodNode)+calcDist(foodNode, currNode);
			/*
			 * For the ith query we need to consider the foodNode which will contribute the least distance
			 * the least distance + the distance of previous query will make answer for the current query
			 */
			if(dp[i]>new_dp) {
				dp[i]=new_dp;
			}
		}
		prevNode=currNode;
	}

	cout<<dp[q]<<endl;
	return 0;
}

