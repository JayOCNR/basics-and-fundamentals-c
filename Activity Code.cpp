#include <iostream>

const int size = 10; // 10 elements

// Sorting
void sort(int arr[], int a)
{
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a - i - 1; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Printing
void print(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main()
{
    int arr1[size], arr2[size];

    // First Array
    std::cout << "Enter " << size << " elements for array 1:" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Element " << (i + 1) << ": ";
        std::cin >> arr1[i];
    }

    // Second Array
    std::cout << "Enter " << size << " elements for array 2:" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Element " << (i + 1) << ": ";
        std::cin >> arr2[i];
    }

    // Combine arrays
    int arr3[size * 2]; // Main Array
    int N = size * 2;   // Number of Elements

    for (int i = 0; i < size; i++)
        arr3[i] = arr1[i];

    for (int i = 0; i < size; i++)
        arr3[size + i] = arr2[i];

    sort(arr3, N);
    std::cout << "Descending order: \n";
    print(arr3, N);

    return 0;
}