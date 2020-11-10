#include "../header/rectangle.hpp"

void Rectangle::set_width(int w) {
this->width = 2*w;
}

void Rectangle::set_height(int h){
this->height = 2*h;
}

int Rectangle::perimeter(){
return this->width + this->height;
}
