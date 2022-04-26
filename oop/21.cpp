#include <iostream>

using namespace std;

class Word
{
	char* string = new char[10];
public:
	Word() //Конструктор по умолчанию 
	{};
	Word() // Конструктор со словом инициализатором
	{};
	void In()
	{
		cin >> string;
	};
	void Print()
	{
		cout << string << endl;
	};

};

int main()
{
	setlocale(LC_ALL, " ");
	// Конструктор по умолчанию 
	Word str;
	str.In();
	str.Print();
	// Конструктор со словом инициализатором
	Word
	
	

}
