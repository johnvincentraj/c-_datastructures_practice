#include <bits/stdc++.h>
using namespace std;

/**
 * Rotate Array Elements depends on given input numbers
 * Time Complexity: O(n * d)
 * Auxiliary Space: O(1)
*/

void leftRotatebyOne(int arr_data[], int arr_size)
{

    /**
     * Get arr_data and place the first
     * value to the last postion
    */

    int temp = arr_data[0];
    for (int i = 0; i < arr_size - 1; i++)
        arr_data[i] = arr_data[i + 1];

    arr_data[arr_size - 1] = temp;
}

void leftRotate(int arr_data[], int element_to_rotate, int arr_size)
{

    /**
     * Call the leftRotatebyOne as many time
     * of elements_to_rotate
    */

    for (int i = 0; i < element_to_rotate; i++)
        leftRotatebyOne(arr_data, arr_size);
}

void printArray(int arr_data[], int arr_size)
{

    /**
     * print the array values with space
    */

    for (int i = 0; i < arr_size; i++)
        cout << arr_data[i] << " ";
    cout << "\n";
}

int main()
{
    int arr_data[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr_size = sizeof(arr_data) / sizeof(arr_data[0]);
    int elements_to_rotate = 3;

    leftRotate(arr_data, elements_to_rotate, arr_size);
    printArray(arr_data, arr_size);

    int temp = arr_data[0];
    cout << "Data : " << temp;
    cout << "\n";
}