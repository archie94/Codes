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


int main(){
    int p;
    cin >> p;
    for(int a0 = 0; a0 < p; a0++){
        int n;
        cin >> n;
        bool is_prime = true;
        for (long i = 2; i <= sqrt(n); i++) {
            if (n%i == 0) {
                is_prime = false;
                break;
            }
        }
        if (n == 1) {
            cout<<"Not prime"<<endl;
            continue;
        }
        if (is_prime) cout<<"Prime"<<endl;
        else cout<<"Not prime"<<endl;
    }
    return 0;
}

