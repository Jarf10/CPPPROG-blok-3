#include <iostream>
#include <math.h>
#include "point.h"

using namespace std;

Point::Point() : x_coordinate(0.0), y_coordinate(0.0), name("std")
{
}

Point::Point(double x, double y): x_coordinate(x), y_coordinate(y), name("std")
{
}

Point::Point(double x, double y, string name): x_coordinate(x), y_coordinate(y), name(name)
{
}

void Point::set_values (const double x, const double y) {
   x_coordinate = x;
   y_coordinate = y;
}

double Point::get_x() const
{
   return x_coordinate;
}

double Point::get_y() const
{
   return y_coordinate;
}

void Point::print()
{
   cout << "{" << x_coordinate << ", " << y_coordinate << ", " << name << "}" << endl;
}

double Point::distance(const Point &pointother)
{
   double width, height, c2;
   width = x_coordinate - pointother.x_coordinate;
   height = y_coordinate - pointother.y_coordinate;
   c2 = pow(width, 2) + pow(height, 2);
   return sqrt(c2);
}
