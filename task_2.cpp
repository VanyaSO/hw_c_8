#include <iostream>
using namespace std;
// Використовуючи покажчики та оператор розіменування, визначити знак числа, введеного з клавіатури.

void getNumberSign(int* number)
{

    if(*number > 0)
        cout << "Positive";
    else if (*number < 0)
        cout << "Negative";
    else
        cout << "Zero";

}

int main()
{
    int number;
    cout << "Enter number: " << endl;
    cin >> number;

    getNumberSign(&number);

    return 0;
}