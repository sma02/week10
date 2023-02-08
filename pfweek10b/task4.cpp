#include <iostream>
using namespace std;

int arr[100];
int arrayElements;

bool isRepeating(int cycleLength);

int main()
{
    int cycles;
    cout << "Enter the number of elements in array: ";
    cin >> arrayElements;
    for (int i = 0; i < arrayElements; i++)
    {
        cout << "Enter the number: ";
        cin >> arr[i];
    }
    cout << "Enter the cycle length: ";
    cin >> cycles;
    if (isRepeating(cycles))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
bool isRepeating(int cycleLength)
{
    if (cycleLength > 200)
    {
        return true;
    }
    int cycleElements[cycleLength];
    for (int i = 0; i < cycleLength; i++)
    {
        cycleElements[i] = arr[i];
    }
    for (int i = cycleLength, j = 0; i < arrayElements, j < cycleLength; i++, j++)
    {
        if (arr[i] != cycleElements[j])
        {
            return false;
        }
    }
    return true;
}