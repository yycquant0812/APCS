//============================================================================
// Name        : apcs.cpp
// Author      : 
// 設置經度 #include <iomanip> 套件
// 使用方法 cout << fixed << setprecision(3) 小數三位
// 
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double f;
	cin >> f;
	cout << fixed << setprecision(3) << (f - 32) * 5 / 9 << "\n";
	return 0;
}
