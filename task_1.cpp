#include <iostream>
using namespace std;
// Використовуючи покажчики та оператор розіменування, визначити найбільше з двох чисел.

void getLargerValue(int* a, int* b)
{
    if(*a > *b)
        cout << *a;
    else if (*a < *b)
        cout << *b;
}

int main()
{
    int a = 4;
    int b = 3;

    getLargerValue(&a, &b);

    return 0;
}