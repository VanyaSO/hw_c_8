#include <iostream>
using namespace std;
// Використовуючи покажчики та оператор розіменування, обміняти місцями значення двох змінних.

void swapValues(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 1;
    int b = 3;

    swapValues(&a, &b);

    return 0;
}