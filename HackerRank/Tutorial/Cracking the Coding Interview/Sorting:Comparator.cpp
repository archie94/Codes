#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

struct Player {
	string name;
	int score;
}; 

bool cmp(Player a, Player b) {
	if (a.score > b.score) return true;
	else if (a.score == b.score) {
		int ans = a.name.compare( b.name);
		if (ans <=0 ) return true;
		return false;
	}
	return false;
}

vector<Player> comparator(vector<Player> players) {
	sort(players.begin(), players.end(), cmp);
	return players;
}

int main() {

	int n;
	cin >> n;
	vector< Player > players;
	string name;
	int score;
	for(int i = 0; i < n; i++){
		cin >> name >> score;
		Player p1;
		p1.name = name, p1.score = score;
		players.push_back(p1);
	}

	vector<Player > answer = comparator(players);
	for(int i = 0; i < answer.size(); i++) {
		cout << answer[i].name << " " << answer[i].score << endl;
	}
	return 0;
}

