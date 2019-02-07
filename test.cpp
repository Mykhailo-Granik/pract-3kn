#include <iostream>
#include <vector>
#include <math.h>


using namespace std;

int main()
{

	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int value;
	cin >> value;

	int index = 0;
	for (int i = 1; i < n; ++i)
	{
		int bestDistance = abs(a[index] - value);
		int currentDistance = abs(a[i] - value);
		if (currentDistance < bestDistance)
		{
			index = i;
		}
	}

	cout << a[index] << endl;

}
