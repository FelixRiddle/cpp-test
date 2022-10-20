#include<iostream>

using namespace std;

class Rectangle {
  int width, height;

  public:
    Rectangle(int x, int y) {
      width = x;
      height = y;
    };

    Rectangle(float x, float y) {
      width = x;
      height = y;
    };
    
    int area() { return width * height; };

    int getWidth() { return width; };

    int getHeight() {
      return height;
    };
};

class Circle {
    double radius;
  public:
    Circle(double r) : radius(r) {}
    double area() { return radius * radius * 3.14159265; }
};

class Cylinder {
    Circle base;
    double height;
    
  public:
    Cylinder(double radius, double height) : base(radius), height(height) {}
    double volume() {return base.area() * height;}
};

int main() {
  Rectangle rect(3, 4);
  
  cout<<"Width: "<<rect.getWidth()<<endl;
  cout << "Height: " << rect.getHeight() << endl;
  cout << "Area: " << rect.area() << endl;

  Cylinder cyl(10, 20);
  cout<<"Cylinder volume: "<<cyl.volume()<<endl;

  return 0;
}