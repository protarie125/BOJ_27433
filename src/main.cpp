#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n;  cin >> n;
	auto ans = ll{ 1 };
	for (auto i = 1; i <= n; ++i) {
		ans *= i;
	}
	cout << ans;

	return 0;
}