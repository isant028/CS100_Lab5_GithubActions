#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main()
{
    Rectangle rect;
    rect.set_width(5);
    rect.set_height(3);
    cout << "Rectangle has width(5), height(3), and perimeter: " << rect.perimeter() << endl;

return 0;
}

