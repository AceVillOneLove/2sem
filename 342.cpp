#include <iostream>
#include <ctime>
#include <list>

using namespace std;

void print(list <int>::iterator it, list <int> list)
{	
	for (it = list.begin(); it != list.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	list <int> fList;
	list <int> lList;
	list <int>::iterator it;
	list <int>::reverse_iterator jt = fList.rbegin();
	int n, counter = 0, max;
	printf("In N: ");
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < 2 * n; i++)
	{
		fList.push_back(rand() % 5);
	
	}
	printf("Source list: ");
	print(it, fList);
	for (it = fList.begin(); it != fList.end(); ++it)
	{
		if (counter < fList.size()/2)
		{
			lList.push_back(*it + *jt);
			++jt;
			counter++;
		}
	}
	printf("Final list: ");
	print(it, lList);	
	it = lList.begin();
	max = *it;
	for (it; it != lList.end(); ++it)
	{
		if (*it > max)
		{
			max = *it;
	
		}
	}
	cout << "Final max: " << max << endl;
}
