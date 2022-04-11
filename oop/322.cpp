#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    vector <int> vec;
    double x, iX, dX, e = 0.05, kX;
    int number, k, counter = 1;
    printf("Введите дробное число:\n");
    cin >> x;
    printf("Введите количество одинаковых чисел:\n");
    cin >> k;
    dX = modf(x, &iX);
    s = to_string(dX);
    s.erase(0, 2);
    for(int i = s.length() - 1; i >=  0; i--)
    {
        if(s[i] == '0')
            s.erase(i, 1);
        else
            break;
    }
    number = stoi(s);
    while(number != 0)
    {
        vec.push_back(number % 10);
        number /= 10;      
    }

    for(int i = vec.size() - 1; i >= 0; i--)
    {
        if(vec.at(i-1) == vec.at(i))
        {
            counter++;
        }
        else
            break;
    }
    if(k <= counter)
        cout << "Содержит"<< endl;
    else    
        cout << "Не содержит" << endl;
    
}
