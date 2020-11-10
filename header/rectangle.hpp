#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
    private:
        double width;
       	double height;
    public:
        Rectangle();
        Rectangle(double w, double h);
	
	    double getLength();
	    double getWidth();
        void set_width(double w);
        void set_height(double h);
        double area();
        double perimeter();
};

#endif // RECTANGLE_HPP
