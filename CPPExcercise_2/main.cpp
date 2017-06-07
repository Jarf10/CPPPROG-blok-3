#include <iostream>
#include <fstream>

using namespace std;

bool logicFunction(bool b1, bool b2, bool b3);
void printlogicfunction(bool a, bool b, bool c, string filename);

int main()
{
   string filename;
   cout << "Welcome to our program!" << endl;
   cout << "What would you like to call the outputfile?" << endl;
   cin >> filename;
   ofstream fileinput;
   fileinput.open("input.txt");

   fileinput << "1 0 1 " << endl
             << "1 1 1 " << endl
             << "0 0 1 " << endl
             << "0 1 0 " << endl;
   fileinput.close();

   std::fstream fileoutput("input.txt", std::ios_base::in);
   bool a, b, c;

   ofstream answer;
   answer.open(filename);
   answer << "The booleans on the sum: (a && b) || !c \n are:"
             "\na b c || answer\t\ta\tb\tc\t||answer" << endl;
   answer.close();

   for(int i=1; i <=4; i++)
   {
   fileoutput >> a >> b >> c;
   printlogicfunction(a, b, c, filename);
   }
   fileoutput.close();
   return 0;
}

bool logicFunction(bool b1, bool b2, bool b3)
{
   if(b3 == false)
   {
      return true;
   }
   else if (b1 && b2)
   {
      return true;
   }
   else
   {
      return false;
   }
}

void printlogicfunction(bool a, bool b, bool c, string filename)
{
   ofstream answer(filename, ios::app);
   if(logicFunction(a, b, c))
   {
      cout << "True" << endl;
      answer << a << " " << b << " " << c << " || " << 1 << "\t\t";
      answer << boolalpha << a << "\t" << b << "\t" << c << "\t||" << true << endl;
   }
   else
   {
      cout << "False" << endl;
      answer << a << " " << b << " " << c << " || " << 0 << "\t\t";
      answer << boolalpha << a << "\t" << b << "\t" << c <<"\t||" << false << endl;

   }
   answer.close();
}
