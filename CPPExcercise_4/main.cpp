#include <iostream>

using namespace std;
void inputLogicValues(bool &b1, bool &b2, bool &b3);

int main(int argc, char *argv[])
{
   bool LogicValue1 = 0;
   bool LogicValue2 = 0;
   bool LogicValue3 = 0;
   //First set of values.
   inputLogicValues(LogicValue1, LogicValue2, LogicValue3);
   cout << "Value 1 = " << LogicValue1 << endl;
   cout << "Value 2 = " << LogicValue2 << endl;
   cout << "Value 3 = " << LogicValue3 << endl;
   //Second set of values.
   inputLogicValues(LogicValue1, LogicValue2, LogicValue3);
   cout << "Value 1 = " << LogicValue1 << endl;
   cout << "Value 2 = " << LogicValue2 << endl;
   cout << "Value 3 = " << LogicValue3 << endl;

   return 0;
}

void inputLogicValues(bool &b1, bool &b2, bool &b3)
{
   cout << "Give three logical values: ";
   cin >> b1 >> b2 >> b3;
}
