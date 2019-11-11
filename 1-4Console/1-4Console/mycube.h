#ifndef CUBE_H
#define CUBE_H
#include "rectangle.h"

class mycube
{
public:
    mycube();
    mycube(int w, int l, int h);

    void setHeight(int height);
    int getHeight();
    int getVolume();

private:
    Rectangle r;
    int height;
};

#endif // CUBE_H
