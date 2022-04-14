#include<iostream>

using namespace std; 

class Point

{

private:

     int a, b;

public:

     Point(int x1, int y1)  { a =x1; b = y1; } 

     // Copy constructor

     Point(const Point &p1) {a = p1.a; b = p1.b; } 

     int getX()            { return a; }

     int getY()            { return b; }

};

int main()

{

     Point p1(10, 15); // Normal constructor is called here

     Point p2 = p1; // Copy constructor is called here

     // Let us access values assigned by constructors

     cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();

     cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();

     return 0;

}