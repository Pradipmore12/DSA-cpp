using namespace std;
#include <bits/stdc++.h>
int main()
{
    int row1, col1, col2;
    cin >> row1 >> col1 >> col2;
    int row2 = col1;
    int matrix1[row1][col1];
    int matrix2[row2][col2];
    int multiply[row1][col2];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    // declare ans matrix elements to be '0'
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            multiply[i][j] = 0;
        }
        cout << endl;
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

    // Multiplication of Two Matrix

    // outer loop iterate over rows of first matrix

    for (int i = 0; i < row1; i++)
    {
        // inner loop iterate over columns of second matrix

        for (int j = 0; j < col2; j++)
        {

            // this 'for' loop is for iterating next col of first matrix and next row of second matrix while calculating

            for (int k = 0; k < row2; k++)
            {

                multiply[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << multiply[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}