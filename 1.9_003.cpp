#include <iostream>
#include <windows.h>

void print_numbers(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void reverse(int* arr, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = sizeof(arr) / sizeof(arr)[0];

    std::cout << "До функции reverse:\t";

    print_numbers(arr, size);

    std::cout << "После функции reverse:\t";

    reverse(arr, size);

    print_numbers(arr, size);

    return 0;

}
