#include <algorithm>
#include <vector>
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;


int main(){
	int a[3]={0};
	cin>>a[0]>>a[1]>>a[2];
	int b[3]={0};
	cin>>b[0]>>b[1]>>b[2];
	int s1=0,s2=0;
	for(int i=0;i<3;i++) {
		if(a[i]>b[i]) {
			s1++;
		}else if(a[i]<b[i]) {
			s2++;
		}
	}
	cout<<s1<<" "<<s2<<endl;
	return 0;
}
