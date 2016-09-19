#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int m[k];
	for(int i=0;i<k;i++) m[i]=0;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
		m[a[i]%k]++;
	}

	/*
	 * Separate elements into buckets depending upon their mod k. 
	 * For 1 3 2 6 4 5 9 , k =3
	 * mod 3 = 0:3 6 9
	 * mod 3 = 1:1 4
	 * mod 3 = 2:2 5
	 *
	 * Now we can think of pairs like elements with mod 3 = 0 
	 * make pairs with elements like (3-0) mod 3 = 0, 
	 * like (3,6),(3,9),(6,9) 
	 * There will be n*(n-1)/2 number of such pairs where n is
	 * the number of elements in list, because the list is the 
	 * same and i!=j. Elements with mod 3 = 1 will match with 
	 * (3-1) mod 3 = 2 , similarly with (3-2) mod 3 = 1. 
	 *
	 * There will be n*k such elements where n is the length of
	 * the first list and k of the second. 
	 *
	 * Since we do not need actual pairs we only store the number 
	 * of elements in the list.
	 */
	
	int sum=0;
	sum+=(m[0]*(m[0]-1))/2;
	for(int i=1;i<=k/2 && i!=k-i;i++) {
		sum+=(m[i]*m[k-i]);
	}
	if(k%2==0) {
		sum+=(m[k/2]*(m[k/2]-1))/2;
	}

	cout<<sum<<endl;
	return 0;
}

