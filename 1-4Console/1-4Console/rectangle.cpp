#include "rectangle.h"

Rectangle::Rectangle(){
}

Rectangle::Rectangle(int w, int l){
    this->width = w;
    this->length = l;
}

void Rectangle::setWidth(int width){
    this->width = width;
}

void Rectangle::setLength(int length){
    this->length = length;
}

int Rectangle::getArea(){
    return this->width * this->length;
}
