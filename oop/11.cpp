#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void quickSort(int* numbers, int left, int right)
{
	int pivot;
	int l_hold = left;
	int r_hold = right;
	pivot = numbers[left];
	while (left < right)
	{
		while ((numbers[right] >= pivot) && (left < right))
			right--;
		if (left != right)
		{
			numbers[left] = numbers[right];
			left++;
		}
		while ((numbers[left] <= pivot) && (left < right))
			left++;
		if (left != right)
		{
			numbers[right] = numbers[left];
			right--;
		}
	}
	numbers[left] = pivot;
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot)
		quickSort(numbers, left, pivot - 1);
	if (right > pivot)
		quickSort(numbers, pivot + 1, right);
}

int main()
{
	setlocale(LC_ALL, "");	
	int N[10], counter = -1, bufer, z, counterZ = 0;
	string adress = "f.txt";
	ofstream file(adress, ios::trunc);	
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
	ifstream newfile;
	newfile.open(adress);
	if (newfile.is_open())
	{
		while(!newfile.eof())
		{
			counter++;
			newfile >> N[counter];			
			if (counter > 8)
				break;
		}
		newfile.close();
	}	
	string newadress = "g.txt";
	file.open(newadress);
	if (file.is_open())
	{
		file << "Вещественные числа из f.txt:\n";
		for (int i = 0; i <= counter; i++)
			file << N[i] << "\t";
		quickSort(N, 0, counter);
		file << "\nОтсортированный список f.txt:\n";
		for (counter; counter >= 0; counter--)
			file << N[counter] << "\t";
		newfile.close();
	}
}
