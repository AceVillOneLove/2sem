#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, " ");
	int bufer;
	ofstream f("f.txt");
	if (f)
	{
		srand(time(NULL));
		for (int i = 0; i < 10; i++)
		{
			f << rand() % 6 - 2 << "\t";
		}
	}
	f.close();
	ifstream h("f.txt");	
	ifstream k("f.txt");
	ofstream g("g.txt");
	for (int i = 0; i < 10; i++)
	{
		h >> bufer;
		if (bufer > 1)
		{
			g << bufer << "\t";
			continue;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		k >> bufer;
		if (bufer <= 1)
		{
			g << bufer << "\t";
			continue;
		}
	}
	f.close();
	h.close();
	k.close();
	g.close();
}
