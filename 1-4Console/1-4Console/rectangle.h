#ifndef RECTANGLE_H
#define RECTANGLE_H

//using namespace std;

class Rectangle
{
public:
    Rectangle();
    Rectangle(int w, int l);
    void setWidth(int width);
    void setLength(int length);
    int getArea();

private:
    int width;
    int length;
};

#endif // RECTANGLE_H
