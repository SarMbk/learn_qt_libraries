#include "mycube.h"

mycube::mycube(){

}

mycube::mycube(int w, int l, int h){
    this->r.setWidth(w);
    this->r.setLength(l);
    this->height = h;
}

void mycube :: setHeight(int height){
    this->height = height;
}


int mycube :: getHeight(){
    return this->height;
}


int mycube :: getVolume(){
    return this->r.getArea() * this->height;

}
