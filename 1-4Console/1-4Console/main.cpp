#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "rectangle.cpp"
#include "mycube.cpp"
#include "mysquare.h"

using namespace std;

int main()
{
    Rectangle r(5,5);
    cout << "area" << r.getArea() << endl;

    r.setWidth(10);
    r.setLength(20);
    cout << "area" << r.getArea() << endl;

    mycube c(5,5,5);
    cout << "volume=" << c.getVolume() << endl;


    mysquare s(10);
    cout << "sqr area " << s.getArea() << endl;
    s.setSomeParam(10);
    cout << "sqr some param " << s.getSomeParam() << endl;

    return 0;
}
