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

void elevenSquare(int n)
{
    WD
}

int main()
{
    sameAlphaRow(5);
}
