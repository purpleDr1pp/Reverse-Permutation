#include <iostream>
#include <vector>
using namespace std;
int main() {
	size_t n;
	cin >> n;
	vector<int> vec;
	int num;
	while (cin >> num) {
		vec.push_back(num);
		if (vec.size() == n) {
			break;
		}
	}
	int storage;
	vector<int> res(n, 0);
	for (size_t i = 0; i < n; i++) {
		storage = vec[i];
		res[storage - 1] = i + 1;
	}
	for (auto& p : res)
	{
		cout << p << " ";
	}
}