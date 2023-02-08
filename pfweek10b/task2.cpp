#include <iostream>
using namespace std;

int data[20];
int NoOfprogressDays(int noOfWeeks);

int main()
{
    int n;
    cout << "Enter number of weeks: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number of miles you ran: ";
        cin >> data[i];
    }
    cout << "Progress days: " << NoOfprogressDays(n) << endl;
}
int NoOfprogressDays(int noOfWeeks)
{
    int progressDays = 0;
    for (int i = 0; i < noOfWeeks - 1; i++)
    {
        if (data[i + 1] > data[i])
        {
            progressDays++;
        }
    }
    return progressDays;
}
