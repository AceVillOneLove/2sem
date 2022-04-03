#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int counter;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            counter++;        
    }
    if (counter == s.length())
    {
        cout << "Целое число" << endl;
        return 0;
    }
    else if (s[0] >= '0'&& s[0] <= '9' && counter != s.length())
    {
        cout << "Ни то ни другое" << endl;
        return 0;
    }
    else   
    {
        cout << "Идентификатор" << endl;
        return 0;
    }
        


}
