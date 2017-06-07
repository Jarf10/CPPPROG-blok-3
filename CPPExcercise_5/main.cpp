#include <iostream>
#include <iomanip>
#include "point.h"
#include <math.h>

using namespace std;

int main () {
   Point Point_object1; //creating object
   Point Point_object2(5.5, 8.8);
   Point Point_object3(2.2, 3.3, "Start");
   Point templates[4];
   double results[3];

   //print direct values
   cout << "Initialise new object of class point:" << endl <<
           Point_object1.get_x()<< " " <<
           Point_object1.get_y() << endl;

   Point_object1.set_values (5.5, 10.10);

   cout << "Now the set values: " << endl <<
           Point_object1.get_x() << " " <<
           Point_object1.get_y() << endl;

   cout << "And object2: " << endl <<
           Point_object2.get_x() << " " <<
           Point_object2.get_y() << endl;
   cout << "And object3: " << endl <<
           Point_object3.get_x() << " " <<
           Point_object3.get_y() << endl;

   cout << "Testing the print function" << endl;
   Point_object3.print();
   Point_object2.print();
   cout << endl;
   cout << "Test the distance function from point2 to point3:" << endl
        << Point_object2.distance(Point_object3) << endl << endl;


   for(int i=0; i<4; i++)
   {templates[i].set_values(pow(i+1, 3), pow(i+1, 4));}

   for(int i=0; i<3; i++)
   {
      results[i]=templates[i].distance(templates[i+1]);
      cout << setprecision(5) << results[i] << "\t";
   }

   cout << endl << endl;

   return 0;
}
