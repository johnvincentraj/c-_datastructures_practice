#include <bits/stdc++.h>
using namespace std;

void printArray(float array_data[])
{
    int array_size = sizeof(array_data) / sizeof(array_data[0]);
    for (int i = 0; i < array_size; i++)
        cout << array_data[i] << " ";
    cout << "\n";
}

void rotate(float array_data[], int array_size, int elements_to_rotate)
{
    float array_rotate_temp[2];
    //float array_remaining_temp[array_size - elements_to_rotate];

    for (int i = 0; i < elements_to_rotate; i++)
        array_rotate_temp[i] = array_data[i];
    /*
    for (int i = elements_to_rotate; i < array_size; i++)
        array_remaining_temp[i] = array_data[i];
    */
    printArray(array_rotate_temp);
    //printArray(array_remaining_temp);
}

int main()
{
    float array_data[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int array_total_data_size = sizeof(array_data);
    int array_single_data_size = sizeof(array_data[0]);
    int array_size = array_total_data_size / array_single_data_size;

    int elements_to_rotate = 2;

    rotate(array_data, array_size, elements_to_rotate);
}