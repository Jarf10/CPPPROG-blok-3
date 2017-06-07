#ifndef POINT_H
#define POINT_H
#include <string>

using namespace std;

class Point {
private:
   double x_coordinate, y_coordinate;
   string name;
public:
   Point();
   Point(double x, double y);
   Point(double x, double y, string name);
   void set_values (const double x, const double y);
   double get_x () const;
   double get_y () const;
   void print();
   double distance(const Point &pointother);
};

#endif // POINT_H
