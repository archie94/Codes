#include <cstdio>
#include <cstdlib>
#include <stack>
#include <limits.h>
#include <iostream>
using namespace std;

int main() {
	long n1,n2,n3,i,sum,h[100001];
	std::stack<long> stk1,stk2,stk3;
	cin>>n1>>n2>>n3;
	for(i=0;i<n1;i++) {
		cin>>h[i];
	}
	sum=0;
	for(i=n1-1;i>=0;i--) {
		sum += h[i];
		stk1.push(sum);
		//cout<<stk1.top()<<endl;
	}
	
	for(i=0;i<n2;i++) {
		cin>>h[i];
	}
	sum=0;
	for(i=n2-1;i>=0;i--) {
		sum+=h[i];
		stk2.push(sum);
		//cout<<stk2.top()<<endl;
	}

	for(i=0;i<n3;i++) {
		cin>>h[i];
	}
	sum=0;
	for(i=n3-1;i>=0;i--) {
		sum+=h[i];
		stk3.push(sum);
		//cout<<stk3.top()<<endl;
	}
	//cout<<stk1.top()<<endl;

	long curr_min_height = 0;
	if(stk1.top()<=stk2.top() && stk1.top()<=stk3.top()) curr_min_height = stk1.top();
	else if(stk2.top()<=stk1.top() && stk2.top()<=stk3.top()) curr_min_height = stk2.top();
	else curr_min_height = stk3.top();
	
	//cout<<curr_min_height<<endl;

	while( (!stk1.empty() && !stk2.empty() && !stk3.empty()) &&  (stk1.top()!= curr_min_height || stk2.top()!=curr_min_height || stk3.top()!=curr_min_height)) {
		if(stk1.top()>curr_min_height) stk1.pop();
		if(stk2.top()>curr_min_height) stk2.pop();
		if(stk3.top()>curr_min_height) stk3.pop();
		
		if(stk1.empty() || stk2.empty() || stk3.empty()) {
			break;
		}

		if(stk1.top()<=stk2.top() && stk1.top()<=stk3.top()) curr_min_height = stk1.top();
		else if(stk2.top()<=stk1.top() && stk2.top()<=stk3.top()) curr_min_height = stk2.top();
		else curr_min_height = stk3.top();
		//cout<<stk1.top()<<" "<<stk2.top()<<" "<<stk3.top()<<" "<<curr_min_height<<endl;
	}

	if(stk1.empty() || stk2.empty() || stk3.empty() ) {
		printf("0\n");
	} else {
		printf("%ld\n",curr_min_height);
	}
	return 0;
}

