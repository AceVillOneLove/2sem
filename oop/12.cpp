#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, " ");
	int sum, bufer;
	ofstream f("f.bin", ios::binary);
	if (f)
	{
		for (int i = 0; i < 10; i++)
		{
			sum = rand() % 6 - 2;
			f.write(reinterpret_cast <char*> (&sum), sizeof(int));
		}
	}
	ifstream h("f.bin", ios::binary);
	ifstream k("f.bin", ios::binary);
	ofstream g("g.bin", ios::binary);
	for (int i = 0; i < 10; i++)
	{
		h.read(reinterpret_cast <char*> (&bufer), sizeof(int));
		if (bufer > 1)
		{
			g.write(reinterpret_cast <char*> (&bufer), sizeof(int));
			continue;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		k.read(reinterpret_cast <char*> (&bufer), sizeof(int));
		if (bufer <= 1)
		{
			g.write(reinterpret_cast <char*> (&bufer), sizeof(int));
			continue;
		}
	}
	f.close();
	h.close();
	k.close();
	g.close();
}
