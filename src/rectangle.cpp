<<<<<<< HEAD
#include "../header/rectangle.hpp"

void Rectangle::set_width(int w) {
this->width = w;
}

void Rectangle::set_height(int h){
this->height = h;
}



int Rectangle::area(){
return this->width * this->height;
=======
nclude "../header/rectangle.hpp"


Rectangle::Rectangle(int w, int h){
    this->height = h;
    this->width = w;
}

double Rectangle::perimeter(){
    return (this->width * 2) + (this->height * 2)
}

void Rectangle::set_width(int w) {
	this->width = w;
}

void Rectangle::set_height(int h){
	this->height = h;
}

double Rectangle::getWidth(){
    return this->width;
}

double Rectangle::getLength(){
    return this->length;
}
int Rectangle::area(){
	return this->width * this->height;
>>>>>>> main
}
