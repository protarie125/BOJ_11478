#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

using ss = unordered_set<string>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	const auto& n = static_cast<int>(s.length());

	auto subs = ss{};
	for (auto i = 0; i < n; ++i) {
		for (auto j = 1; i + j <= n; ++j) {
			const auto& t = s.substr(i, j);
			subs.insert(t);
		}
	}

	cout << subs.size();

	return 0;
}