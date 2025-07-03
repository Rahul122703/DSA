#include <iostream>
using namespace std;

void alternate01sol1(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            int print = (row & 1) ? (col & 1) : (col + 1) % 2;
            cout << print;
        }
        cout << "\n";
    }
}

void alternate01sol2(int n)
{
    for (int row = 1; row <= n; row++)
    {
        int start = row & 1;
        for (int col = 1; col <= row; col++)
        {
            cout << start;
            start = 1 - start; // here start = 1 - start
        }
        cout << "\n";
    }
}

void vPattern(int n)
{
    int total = 2 * (n - 1);
    for (int row = 1; row <= n - 1; row++)
    {
        for (int col = 1; col <= total; col++)
        {
            if (col <= row)
            {
                cout << col;
            }
            else if (col > total - row) // here "total - row"
            {
                cout << total - col + 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void incrementalPattern(int n)
{
    int incrementer = 1;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << (incrementer++) << " "; // here "<<"
        }
        cout << "\n";
    }
}

/* Here
'A' → 65
'a' → 97
using char to covert num to character
*/
void alphaLinear(int n)
{
    for (int row = 1; row <= n; row++)
    {

        for (int col = 0; col < row; col++)
        {
            cout << char(65 + col);
        }
        cout << "\n";
    }
}

void alphaLinearReverse(int n)
{
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < (n - row); col++)
        {
            cout << char(65 + col);
        }
        cout << "\n";
    }
}

void sameAlphaRow(int n)
{
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col <= row; col++)
        {
            cout << char(65 + row);
        }
        cout << "\n";
    }
}

void elevenSquareAlpha(int n)
{
    int breaker = n;
    for (int row = 1; row <= n; row++)
    {
        int incrementer = 1;
        for (int col = 1; col <= (2 * n) - 1; col++)
        {
            if (row + col <= n)
            {
                cout << " ";
            }
            else if (col <= n - 1)
            {
                cout << char(64 + incrementer++);
            }
            else
            {
                cout << char(64 + incrementer--);
            }
            if (col - row == n - 1)
            {
                break;
            }
        }
        cout << "\n";
    }
}

void alphaTriange(int n)
{
    for (int row = n; row >= 1; row--)
    {
        for (int col = row; col <= n; col++)
        {
            cout << char(64 + col);
        }
        cout << endl;
    }
}

void SymmetricVoid(int n)
{
    for (int row = 1; row <= 2 * n; row++)
    {
        for (int col = 1; col <= 2 * n; col++)
        {
            if (row <= n)
            {
                if (row + col <= n - 1)
                {
                    cout << "*";
                }
                else if (n + 1 < (row + col) && col < (n + row))
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            else
            {
                int mirror = row - n; // here
                if (col <= mirror || col > 2 * n - mirror)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}

void hollowRectangle(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if ((col == 1 || col == n) || (row == 1 || row == n))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void symmetricButterfly(int n)
{
    for (int row = 1; row <= (2 * n) - 1; row++)
    {
        for (int col = 1; col <= (2 * n); col++)
        {

            if (row < n)
            {
                if ((col <= row) || ((2 * n) - row + 1) <= col)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                int mirror = 2 * n - row;
                if (col <= mirror || row < col)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}

void numberPattern(int n)
{
    // Outer loop for no. of rows
    for (int i = 0; i < 2 * n - 1; i++)
    {

        // inner loop for no. of columns.
        for (int j = 0; j < 2 * n - 1; j++)
        {

            // Initialising the top, down, left and right indices of a cell.
            int top = i;
            int bottom = j;
            int right = (2 * n - 2) - j;
            int left = (2 * n - 2) - i;

            // Min of 4 directions and then we subtract from n
            // because previously we would get a pattern whose border
            // has 0's, but we want with border N's and then decreasing inside.
            cout << (n - min(min(top, bottom), min(left, right))) << " ";
        }

        // As soon as the numbers for each iteration are printed, we move to the
        // next row and give a line break otherwise all numbers
        // would get printed in 1 line.
        cout << endl;
    }
}

int main()
{
    numberPattern(5);
}
