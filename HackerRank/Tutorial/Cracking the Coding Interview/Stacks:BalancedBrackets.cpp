#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool is_balanced(string expression) {
	vector<char> s;
	for(int i=0;i<expression.length();i++) {
		if (expression[i] == '{' || expression[i] == '[' || expression[i] == '(') {
			s.push_back(expression[i]);
		} else {
			if (s.size() == 0) {
				return false;
			}
			char c = s.back();
			s.pop_back();
			if (c == '(' && expression[i] != ')') {
				return false;
			} else if (c == '{' && expression[i] != '}') {
				return false;
			} else if (c == '[' && expression[i] != ']') {
				return false;
			}
		}
	}
	return s.empty();
}

int main(){
	int t;
	cin >> t;
	for(int a0 = 0; a0 < t; a0++){
		string expression;
		cin >> expression;
		bool answer = is_balanced(expression);
		if(answer)
			cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

