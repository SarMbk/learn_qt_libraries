#include "mysquare.h"

mysquare::mysquare(){
}

mysquare::mysquare(int side){
    this->setWidth(side);
    this->setLength(side);
}

int mysquare::getSomeParam(){
    return this->someParam;
}

void mysquare::setSomeParam(int p){
    this->someParam = p;
}

