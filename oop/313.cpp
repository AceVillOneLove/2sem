#include <iostream>
#include <string>

using namespace std;
//КАК СДЕЛАТЬ БЫСТРЕЕ

int main()
{
    string s, str;
    int j = 0, k;
    getline(cin, s);
    bool flag = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            int score = 0;
            flag = false; 
            cout << j << endl;
            for (int l = 0; l < j; l++)
            {
                k = l;
                    for(int h = j; h > k; --h)
                    {
                        if (str[l] == str[h])
                        {
                            score++;
                        }
                    }
            }
            if(score == 0)
            {
            for (int p = 0; p < j; p++)
                cout << str[p];
            cout << " ";   
            }
            j = 0;            
        }            
        if(flag == true)
        {
            str[j] = s[i];
            j++;            
        }
        flag = true;
        
    }
} 

     
