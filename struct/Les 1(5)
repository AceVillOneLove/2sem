#include <iostream>

using namespace std;

int step(int nominal[6], int &counter, int &n, int &x, int &z, int &counterZ)
{
    if(n == 0)
        return 0;
    x = n / nominal[counter];
    z += n / nominal[counter];
    n = n % nominal[counter];
    if(x > 0)
    {
        counterZ++;
    }

    for(int i = 0; i < x; i++)
        cout << nominal[counter] << " ";
    counter ++;
    step(nominal, counter, n, x, z, counterZ);

} 

int main()
{
    printf("Введите сумму:\n");
    int nominal[6] = {500, 100, 50, 20, 10, 5}, n, counter = 0, x = 0, z = 0, counterZ = 0;
    cin >> n;
    printf("Используемые номиналы: ");
    step(nominal, counter, n, x, z, counterZ);
    cout << "\nСуммарное использованное количество банкнот: " << z << endl;
    cout << "Использованное количество номиналов: " << counterZ << endl;
    }
