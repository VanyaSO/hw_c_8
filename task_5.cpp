#include <iostream>
using namespace std;
// Використовуючи покажчик на масив цілих чисел, порахувати суму елементів масиву.
// Використовувати в програмі арифметику покажчиків для просування масивом, а також оператор розіменування.

int sumArray(int* arr, int size)
{
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += *(arr + i);
    }

    return sum;
}

int main()
{
    const int SIZE = 5;
    int arr[SIZE] = {2,7,2,6,43};

    cout << sumArray(arr, SIZE);

    return 0;
}