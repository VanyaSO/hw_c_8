#include <iostream>
using namespace std;
// Написати примітивний калькулятор, користуючись тільки покажчиками

void calculate(int* a, int* b, char* symbol)
{
    int result = 0;

    switch (*symbol) {
        case '+':
            result = *a + *b;
            break;
        case '-':
            result = *a - *b;
            break;
        case '*':
            result = *a * *b;
            break;
        case '/':
            result = *a / *b;
            break;
    }

    cout << result;

}

int main()
{
    int n1, n2;
    char symbol;

    cout << "Enter expression (2+4): " << endl;
    cin >> n1 >> symbol >> n2;

    calculate(&n1, &n2, &symbol);


    return 0;
}