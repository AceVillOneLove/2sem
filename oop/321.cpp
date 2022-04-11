#include <iostream>
#include <vector>

using namespace std;

class Number
{
public:
int n, k, counter;
vector <int> vec;

    int step()
    {
        for(int i = 0; i < 10; i++)
        {
            if (vec[i] > k)
            {
                cout << "Условие выполнено\nПовторющихся " << vec[i] << " , минимально повторяющихся должно быть " <<  k << endl;
                break;
            }
            else
            {
                counter++;
            }           
        }
        if (counter == vec.size())
        {
            printf("Условие не выполнено\n");
            return 0;
        }
    }
};

int main()
{
    Number number;
    printf("Введите заданное число: ");
    cin >> number.n;
    printf("Введите число количество повторяющихся цифр: ");
    cin >> number.k;    
    number.vec.resize(10, 0);
    while(number.n!=0)
    {
        number.vec[number.n%10]++;
        number.n /= 10;
    }
    number.step();
}
