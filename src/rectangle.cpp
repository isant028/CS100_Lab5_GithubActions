<<<<<<< HEAD
#include "../header/rectangle.hpp"
=======
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
>>>>>>> main


Rectangle::Rectangle(double w, double h){
    this->height = h;
    this->width = w;
}
Rectangle::Rectangle(){}

double Rectangle::perimeter(){
    return (this->width * 2) + (this->height * 2);
}

void Rectangle::set_width(double w) {
	this->width = w;
}

void Rectangle::set_height(double h){
	this->height = h;
}

double Rectangle::getWidth(){
    return this->width;
}

double Rectangle::getHeight(){
    return this->height;
}
double Rectangle::area(){
	return this->width * this->height;
>>>>>>> main
}
