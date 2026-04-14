///【練習】計算 1 加到 100 的和 (使用 while)
#include <iostream>
using namespace std;

int main() {
	int i = 1, sum = 0;
	while (i <= 100) {
		sum = sum + i;
		i++;
	}
	cout << sum << endl;
	return 0;
}
