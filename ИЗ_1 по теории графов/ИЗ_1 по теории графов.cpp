#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	cout << "Введите кол-во вершин в графе:\n";
	cin >> n;
	cout << "\n";
	int* mas = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Введите степень " << i + 1 << "-й вершины:\n";
		cin >> mas[i];
	}
	cout << "\n";

	int f = 1, sum = 0, k = 0;
	for (int i = 0; i < n; i++) {
		sum += mas[i];
	}
	for (int i = 0; i < n; i++) {
		if (mas[i] % 2 != 0) k++;
	}
	for (int i = 0; i < n; i++) {
		if (mas[i] < 0 || sum % 2 != 0 || sum <= n || k % 2 != 0) f = 0;
	}

	if (f == 1) cout << "Граф существует";
	else cout << "Граф не существует";
	return 0;
}