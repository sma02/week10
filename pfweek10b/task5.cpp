#include <iostream>
using namespace std;

int boxVolume(int height,int  width,int length);

int main()
{
    int n;
    int totalVolume=0;
    cout << "Enter the number of boxes: ";
    cin >> n;
    int boxes[n * 3];
    for (int i = 0; i < n * 3; i += 3)
    {
        cout << "Enter height : ";
        cin >> boxes[i];
        cout << "Enter width : ";
        cin >> boxes[i + 1];
        cout << "Enter length : ";
        cin >> boxes[i + 2];
    }
       for (int i = 0; i < n * 3; i += 3)
       {
        totalVolume+=boxVolume(boxes[i],boxes[i+1],boxes[i+2]);
       }
       cout<<"Total volume: "<<totalVolume<<endl;
}
int boxVolume(int height,int  width,int length)
{
    return height*width*length;
}