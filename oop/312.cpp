#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string s2, s10;
    getline(cin, s2);
    int counter = s2.length(), z = counter, num = 0;
    int* num10 = new int[counter];
    int num2 = stoi(s2);
    while (num2 > 0)
    {
        --counter;
        num10[counter] = num2 % 10;

        num2 = num2 / 10;
    }
    for (int i = 0; i < z; i++) {
        num += num10[i] * pow(2, i);
    }
    s10 = to_string(num);
    cout << s10 << endl;
    return 0;
}