//Bubble Sort Code C++
using namespace std;
#include <iostream>
void bubbleSort(int arr[], int n)
{
    int count = 1;
    while (count < n)
    {
        for (int j = 0; j < n - count; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        count++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    return 0;
}