#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0;  i < n; ++i)
		cout << "Hello World, Judge " << i + 1 << "!\n";

	return 0;
}