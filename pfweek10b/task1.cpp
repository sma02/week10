#include <iostream>
using namespace std;

int checkCondition(char letter, string input)
{
    int sum = 0;
    for (int i = 0; i < input.length(); i++)
    {
        if (letter == input[i])
            sum++;
    }
    return sum;
}

int main()
{
    char charToFind;
    int n;
    int sum = 0;
    cout << "How many lines do you want to enter?: ";
    cin >> n;
    string words[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the string: ";
        cin >> words[i];
    }
    cout << "Enter the character to find: ";
    cin >> charToFind;
    for (int i = 0; i < n; i++)
    {
        sum += checkCondition(charToFind, words[i]);
    }
    cout << "The  required character exists " << sum << " times in the string" << endl;
}