#include <iostream>
#include <vector>

using namespace std;

class companies
{
	vector <int> cmpA;
	vector <int> cmpB;
	vector <int> percent;
	vector <int> bufer;
	int value;
	int counter;
public:
	void Push_back()
	{
		printf("In company A: ");
		cin >> value;
		cmpA.push_back(value);
		printf("In company B: ");
		cin >> value;
		cmpB.push_back(value);
		printf("In A of B: ");
		cin >> value;
		percent.push_back(value);
	}
	void in()
	{
		printf("In number of companies: ");
		cin >> counter;
		while (counter)
		{
			Push_back();
			counter--;
		}
	}
	void check()
	{
		counter = 0;
		for (int i = 0; i < cmpA.size(); i++)
		{
			if (percent[i] > 50)
			{
				bufer.push_back(i);
				counter++;
			}
		}
		if (counter > 1)
		{
			int newA, newB, newPercent = 0;
			for (int i = 0; i < bufer.size(); i++)
			{

			}
		}
		else if (counter == 0)
		{
			printf("Нет ни одной контролирующей компании\n");
		}
	}
	void print()
	{
		for (int i = 0; i < bufer.size(); i++)
		{
			cout << "Компания " << cmpA[bufer[i]] << " контролирует компанию " << cmpB[bufer[i]] << " на " << percent[bufer[i]] << " %\n";
		}
	}

};

int main()
{
	setlocale(LC_ALL, "rus");
	companies cmp;
	cmp.in();
	cmp.check();
	cmp.print();
	system("pause");
	return 0;
}
