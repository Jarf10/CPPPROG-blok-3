#include <iostream>
#include <limits>
#include <sstream>
#include <iomanip>
#include <math.h>
#include <fstream>

using namespace std;

int main()
{
   double floati = 0.0;
   string str = " ";
   cout << "Enter q to quit" << endl;
   while(str != "q" && str != "Q")
   {
      cout << "Enter a floating point number between 5 and 10:" << endl;
      cin >> str;
      istringstream ss(str);
      ss >> floati;
      if(floati >= 5 && floati <= 10)
      {
         double answer = sqrt(floati);
         cout << "Your float in 2 decimals is:" << setprecision(3) << answer << endl;
         ofstream fileinput ("results.txt", ofstream::out);

           fileinput << setprecision(3) << answer;

           fileinput.close();
      }
      else cout << "invalid value" << endl;
   }
   return 0;
}
