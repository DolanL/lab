#include<iostream>
using namespace std;

int main()
{
	int n, m;
	cout << "razmer 1 yacheiki" << endl;
	cin >> n;
	cout << "razmer 2 yacheiki" << endl;
	cin >> m;
	int a[n][m];
	int b[n][m];
	cout << "vvod elementov 1 massiva" << endl;
	for (int i = 0; i<n; i++)
		for (int j = 0; j<m; j++)
			cin >> a[i][j];
	cout << "vvod elementov 2 massiva" << endl;
	for (int i = 0; i<n; i++)
		for (int j = 0; j<m; j++)
			cin >> b[i][j];

	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
			cout << a[i][j] + b[i][j] << " ";
		cout << endl;
	}


	return 0;
}
