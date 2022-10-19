// https://my.newtonschool.co/playground/code/10j69gobrq38/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <deque>
using namespace std;
using ll = long long;
#define all(v) v.begin(), v.end()
#define rep(i, m, n) for (int i = m; i < n; ++i)
const double pi = 3.1415926535898;
using graph = vector<vector<int>>;

int main()
{
	int n, q;
	string s;
	cin >> n >> q >> s;
	vector<pair<int, int>> qr;
	rep(i, 0, q) {
		int q1, q2; cin >> q1 >> q2;
		qr.push_back({ q1, q2 });
	}

	int start = 0;
	for (auto p : qr) {
		if (p.first == 1) {
			start = (start - p.second + n) % n;
		}
		else {
			cout << s[(start + p.second - 1) % n] << endl;
		}
	}
}