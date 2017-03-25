#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int numberOfBoomerangs(vector<pair<int, int>>& points) {
	int numPair = points.size();
	int count = 0;
	for (int i = 0; i<numPair; i++) {
		unordered_map<int, int> hash;
		for (int j = 0; j<numPair; j++) {
			if (i == j) continue;
			int distance = pow(points[i].first - points[j].first, 2) + pow(points[i].second - points[j].second, 2);
			hash[distance]++;
		}
		for (auto it = hash.begin();it != hash.end(); it++) {
			count += it->second * (it->second - 1);
		}
	}
	return count;
}

int main() {
	vector<pair<int, int>> points{ { 1, 0 } ,{ 0, 0 } ,{ 2, 0 } };
	return numberOfBoomerangs(points);
}