#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
    private:
        int width;
        int height;
    public:
        Rectangle();
        Rectangle(int w,int h);

        double getWidth();
        double getHeight();
        void set_width(int w);
        void set_height(int h);
        double area();
        double perimeter();
};

#endif // RECTANGLE_HPP
