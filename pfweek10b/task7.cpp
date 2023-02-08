#include <iostream>
using namespace std;

string reverseWords(string words);
string ExtractChars(string input, int startPos, int endPos);

int main()
{
    int spacesCount = 0;
    string sentence;
    cout << "Enter the words: ";
    getline(cin, sentence);
    cout << "Reversed string: " << reverseWords(sentence) << endl;
}
string reverseWords(string words)
{
    string reversedString;
    int startPos, endPos;
    endPos = words.length();
    for (int i = words.length() - 1; i >= 0; i--)
    {
        if (words[i] == ' ')
        {
            startPos = i;
            reversedString += ExtractChars(words, startPos, endPos);
            endPos = i;
        }
    }
    reversedString += " " + ExtractChars(words, 0, endPos);
    return reversedString;
}
string ExtractChars(string input, int startPos, int endPos)
{
    string temp;
    for (int i = startPos; i < endPos; i++)
    {
        temp += input[i];
    }
    return temp;
}