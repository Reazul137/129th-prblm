#include<iostream>
using namespace std;
int main()
{
    int width, length, area, peri;

    cout << " \n\n Find the area and perimeter of a rectangle : \n";
    cout << " --------------------------------------------------\n";

    cout << " Input the length of the rectangle : ";
    cin >> length;

    cout << " Input the width of the rectangle : ";
    cin >> width ;

    area = ( length * width);
    peri = 2 * (length + width);

    cout << " The area of the rectangle is : "<<area << endl;
    cout << " The perimeter of the rectangle is : "<< peri << endl;

    return 0;



}
