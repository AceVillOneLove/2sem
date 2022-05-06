#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

class vector 
{
	int N, capacity;
	int* arrayD;
public:
	//Конструкторы
		vector() 
		{
			printf("In arrayD size: ");
			cin >> N;
			capacity = N + 10;
			arrayD = new int[N];
		}
		vector(int N) 
		{
			capacity = N + 10;
			this->N = N;
			arrayD = new int[N];
		}

		vector(const vector &vector)
		{
			this->arrayD = new int[vector.N];
			this->N = vector.N;
			for (int i = 0; i < vector.N; i++)
			{
				this->arrayD[i] = vector.arrayD[i];
			}
		}
	//Деструктор
		~vector()
		{
			delete[] arrayD;
		}
	//Методы
		void reserve()
		{
			capacity += 10;
			int* bufer = arrayD;
			arrayD = new int[capacity];
			for (int i = 0; i < N; i++)
			{
				arrayD[i] = bufer[i];
			}
			delete[] bufer;
		}
		void resize()
		{
			int k;
			printf("In new vector size: ");
			cin >> k;
			while (k >= capacity)
			{
				reserve();
			}
			int* bufer = arrayD;
			arrayD = new int[k];
			if (k < N)
			{
				for (int i = 0; i < k; i++)
				{
					arrayD[i] = bufer[i];
				}
			}
			else
			{
				for (int i = 0; i < N; i++)
				{
					arrayD[i] = bufer[i];
				}
			}
			N = k;
			delete[] bufer;
		}
		void push_back(int value)
		{
			if (N >= capacity)
			{
				capacity += 1;
			}
			arrayD[N++] = value;
		}
		void fill(int value)
		{
			for (int i = 0; i < N; i++)
			{
				arrayD[i] = value;
			}
		}
		void random()
		{
			srand(time(NULL));
			for (int i = 0; i < N; i++)
			{
				arrayD[i] = rand() % 10;
			}
		}
		int size()
		{			
			return N;
		}
		int Capacity()
		{
			cout << capacity << endl;
			return capacity;
		}
		void print()
		{
			for (int i = 0; i < N; i++)
			{
				cout << arrayD[i] << " ";
			}
			cout << endl;
		}		
	//Перегрузки
		int& operator[](int index)
		{
			return arrayD[index];
		}
		friend fstream& operator<<(fstream& out, const vector& vector)
		{
			for (int i = 0; i < vector.N; i++)
			{
				out << vector.arrayD[i] << " ";
			}			
			return out;
		}
		friend fstream& operator>>(fstream& in, const vector& vector)
		{
			for (int i = 0; i < vector.N; i++)
			{
				in >> vector.arrayD[i];
			}
			return in;
		}
};
