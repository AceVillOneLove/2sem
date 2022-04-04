/*include <iostream>

using namespace std;

int main()
{
    int nominal[6] = {500, 100, 50, 20, 10, 5}, k, sum, n;
    cout << "Введите количество номиналов:\n";
    cin >> k;
    if(k>=1 && k <=6)
    {
        cout << "Введите сумму\n";
        cin >> sum;
        n = sum;
        for(int i = 0; i < 6; i++)
        {
            if (k - 1 == 0)
            {
                if(sum % nominal[i] == 0)
                {
                    n = sum / nominal[i];
                    sum = sum % nominal[i];
                    for(int j = 0; j < n; j++)
                    {
                        cout << nominal[i] << " ";
                    }
                    break;
                }
            }
            else
            {
                n = sum / nominal[i];
                sum = sum % nominal[i];
                for(int j = 0; j < n; j++)
                    cout << nominal[i] << " ";
            }
        }      
    }
    else
        return 0;
}*/

#include <iostream>

using namespace std;

int step(int &z, int &k, int &sum, int &n, int nominal[6], int &counter, int &counterZ)
{
    if (sum == 0)
        return 0;    
    if (k == 1)
    {
        if (sum % nominal[counter] == 0)
        {
            n += sum / nominal[counter];
            z = sum / nominal[counter];
            sum = sum % nominal[counter];
            if(z > 0)
            {
                counterZ++;
            }  
            for (int i = 0; i < z; i++)
            
            {
                cout << nominal[counter] << " ";
            }
            return 0;
        }
        else
        {
            counter++;
            step(z, k, sum, n, nominal, counter, counterZ);
        }
    }
    else
    {
        n += sum / nominal[counter];
        z = sum / nominal[counter];
        if(z > 0)
        {
            counterZ++;
            k--;
        }
        sum = sum % nominal[counter];
        for (int i = 0; i < z; i++)
        {
            cout << nominal[counter] << " ";
        }
        counter++;
        step(z, k, sum, n, nominal, counter, counterZ);
    }
}
    

int main()
{
    int nominal[6] = {500, 100, 50, 20, 10, 5}, k, sum, counter = 0, n, z, counterZ = 0;
    cout << "Введите количество номиналов:\n";
    cin >> k;
    printf("Введите сумму:\n");
    cin >> sum;
    step(z, k, sum, n, nominal, counter, counterZ);
    cout << "\nВсего использовано купюр: " << n;
    cout << "\nВсего использовано номиналов " << counterZ << endl;

}
