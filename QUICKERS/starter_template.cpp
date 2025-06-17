#include <iostream>
#include <vector>
using namespace std;

void print_array(int array[], int size)
{
    cout << "THE ARRAY IS : | ";
    int i = 0;
    for (; i < size; i++)
    {
        cout << array[i] << " | ";
    }
    cout << endl;
}

void print_vector(vector<int> array)
{
    int i = 0;
    cout << "VECTOR : | ";
    for (; i < array.size(); i++)
    {
        cout << array[i] << " | ";
    }
    cout << endl;
}

int main()
{
    cout << "hello world";
    return 0;
}