using namespace std;
#include <bits/stdc++.h>
void insertionSort(int arr[], int n)
{
    int current, i, j;
    for (i = 1; i < n; i++)
    {
        current = arr[i];
        j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = current;
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k]<<" ";
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
    insertionSort(arr, n);
    return 0;
}