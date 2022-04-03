#include <stdlib.h>
#include <ctime>  
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    int N[10];
    srand((unsigned)time(NULL));
    double k = 0;
    ofstream file("f.txt", ios::trunc);
    if (file.is_open())
	{
		srand(time(NULL));
		for (int i = 0; i < 10; i++)
		{
			N[i] = rand() % 10 - 5;
			file << N[i] << "\t";
		}
		file.close();
	}
    ifstream infile("f.txt");
    ofstream outfile("1.bin", ios::binary);

    while (!infile.eof())
    {
        infile >> k;
        if (k > 1.0)
            outfile.write(reinterpret_cast <char*>(&k), sizeof (double));
    }

    infile.close();
    infile.open("numbersi.txt");

    while (!infile.eof())
    {
        infile >> k;
        if (k <= 1.0)
            outfile.write(reinterpret_cast <char*>(&k), sizeof (double));
    }

    infile.close();
    outfile.close();

    return 0;
}
