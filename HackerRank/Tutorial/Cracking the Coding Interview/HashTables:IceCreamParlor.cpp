#include <bits/stdc++.h>

using namespace std;

typedef struct input {
	int pos;
	int num;
} input;

bool cmpfunc(input a,input b) {
	if (a.num < b.num) return true;
	return false;
}

void print_result(input a, input b) {
	if (a.pos<b.pos) {
		cout<<a.pos<<" "<<b.pos<<endl;
	} else {
		cout<<b.pos<<" "<<a.pos<<endl;
	}
}

void solve(vector <int> arr, int money) {
    vector <input> a;
    for (int i = 0;i <arr.size();i++) {
	    input x;
	    x.pos = i+1;
	    x.num = arr[i];
	    a.push_back(x);
    }

    sort(a.begin(),a.end(),cmpfunc);

    int i =0, j = a.size()-1;
    while (i<j) {
	    if (a[i].num + a[j].num == money) {
		    print_result(a[i],a[j]);
		    return;
	    }
	    if (a[i].num + a[j].num < money) {
		    i++;
		    continue;
	    } else {
		    j--;
		    continue;
	    }
    }
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int money;
        cin >> money;
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0; arr_i < n; arr_i++){
           cin >> arr[arr_i];
        }
        solve(arr, money);
    }
    return 0;
}

