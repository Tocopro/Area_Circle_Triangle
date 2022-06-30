#include <iostream>
#include <cmath>
using namespace std;


class Triangle
        {
public:
    double width{}, height{}, radius{};


          double pie = 3.14;
           void User_input()
          {

              cout << "Enter the Height of the Triangle: "  << endl;
              cin >> height;
              cout << "Enter the Width of the Triangle: " << endl;
              cin >> width;
              cout << "Enter the Radius of the Circle: " << endl;
              cin >> radius;
          }
          void circleArea() const
          {

              double Circle_Area = pie * pow(radius, 2);
              cout << "Area of the Circle = " << Circle_Area << endl;
          }
          void triangleArea() const
          {
              double triangle_Area = 0.5 * height * width;
              cout <<"Area of the Triangle = " <<  triangle_Area << endl;
          }

};
int main() {
     Triangle calc;
     calc.User_input();
     calc.circleArea();
     calc.triangleArea();
}

