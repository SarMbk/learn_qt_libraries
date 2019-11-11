#ifndef MYSQUARE_H
#define MYSQUARE_H
#include "rectangle.h"



class mysquare : public Rectangle
{
public:
    mysquare();
    mysquare(int side);
    int getSomeParam();
    void setSomeParam(int p);

private:
    int someParam;
};

#endif // MYSQUARE_H
