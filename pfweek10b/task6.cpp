#include <iostream>
using namespace std;

int packages[10] = {120, 45, 78, 23, 56, 89, 34, 67, 101, 243};

void swap(int position1, int position2);
void printSortedPackages();

int main()
{
    int smallest;
    int smallesLoc = 0;
    for (int i = 0; i < 10-1; i++)
    {
        smallest = packages[i];
        for (int j = i + 1; j < 10; j++)
        {
            if (packages[j] < smallest)
            {
                smallest = packages[j];
                smallesLoc = j;
            }
        }
        if (smallest != packages[i])
        {
            swap(i, smallesLoc);
        }
    }
            printSortedPackages();
}
void swap(int position1, int position2)
{
    int temp = packages[position1];
    packages[position1] = packages[position2];
    packages[position2] = temp;
}
void printSortedPackages()
{
    for (int i = 0; i < 10; i++)
    {
        cout << packages[i] << " ";
    }
    cout << endl;
}