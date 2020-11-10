#include "../header/rectangle.hpp"


Rectangle::Rectangle(int w, int h){
    this->height = h;
    this->width = w;
}

double Rectangle::perimeter(){
    return (this->width * 2) + (this->height * 2)
}

int Rectangle::area(){
	return this->width * this->height;
}