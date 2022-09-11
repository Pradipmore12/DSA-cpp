#include <iostream>

using namespace std;

int main()
{
    int mat[7][7];
    int startrow = 0, endrow = 6, startcol = 0, endcol = 6;
    int term = 4;

    while (startrow <= endrow && startcol <= endcol)
    {
        for (int col = startcol; col <= endcol; col++)
        {
            mat[startrow][col] = term;
        }
        startrow++;
        for (int row = startrow; row <= endrow; row++)
        {
            mat[row][endcol] = term;
        }
        endcol--;
        for (int col = endcol; col >= startcol; col--)
        {
            mat[endrow][col] = term;
        }
        endrow--;
        for (int row = endrow; row >= startrow; row--)
        {
            mat[row][startcol] = term;
        }
        startcol++;
        term--;
    }
    cout << endl;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
    // OutPut:
    /*

          4 4 4 4 4 4 4
          4 3 3 3 3 3 4
          4 3 2 2 2 3 4
          4 3 2 1 2 3 4
          4 3 2 2 2 3 4
          4 3 3 3 3 3 4
          4 4 4 4 4 4 4

    */
}
