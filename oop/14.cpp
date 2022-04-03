#include <iostream>
#include <string>
#include <fstream>

using namespace std;
//ЕСЛИ РАЗМЕР МАССИВА НЕИЗВЕСТЕН
class Students
{
public:
    string name, surname;
    int form;
    double mark;
};

int main()
{
    double score;
    int counter;
    Students student[40];
    string adress = "students.txt";
    ifstream students(adress);
    if (students.is_open())
    {
        for (int i = 0; i < 40; i++)
        {
            students >> student[i].surname;
		    students >> student[i].name;
		    students >> student[i].form;
		    students >> student[i].mark;
            counter++;
        }
        students.close();
    }
    for (int i = 0; i < 40; i++)
    {
        score += student[i].mark;
    }
    score /= counter;
    ofstream newstudents("newstudents.txt", ios::trunc);
    newstudents << "Средний балл:\t" << score << endl;
    for (int i = 0; i < 40; i++)
    {
        if (student[i].mark >= score)
        {
            newstudents << student[i].surname << " ";
            newstudents << student[i].name << " ";
            newstudents << student[i].form << " ";
            newstudents << student[i].mark << " ";
            newstudents << endl;
        }
    }
}
