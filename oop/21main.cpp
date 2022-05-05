#include <iostream>
#include <ctime>
#include <cmath>
#include "21.cpp"

using namespace std;

int main()
{
	vector vec(10000);
	vec.fill(0);
	int n;
	for (int i = 0; i < pow(10, 4); i++)
	{
		n = rand() % 10000;
		cout << n << " ";
		vec[n]++;		
	}
	cout << "\n----\n";
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i] == 0)
		{
			cout << i << endl;
		}
	}

}

