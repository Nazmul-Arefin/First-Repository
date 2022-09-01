#include <bits/stdc++.h>
using namespace std;

void swapAternate(int arr[], int size)
{
    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size)
        {
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[8] = {3, 4, 2, 5, 7, 6, 10, 12};

    swapAternate(arr, 8);
    printArray(arr, 8);
}