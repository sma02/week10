#include <iostream>
using namespace std;

bool isPeak(int left,int middle,int right);

int main()
{
    int n;
    cout << "Enter the size of input array: ";
    cin >> n;
    int numbers[n];
    int resultant[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> numbers[i];
    }
    for (int i = 1; i < n - 1; i++)
    {
        if(isPeak(numbers[i-1],numbers[i],numbers[i+1]))
        {
            resultant[count] = numbers[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout << resultant[i] << " ";
    }
    cout << endl;
}

bool isPeak(int left,int middle,int right)
{
if(middle>left&&middle>right)
{
    return true;
}
return false;
}