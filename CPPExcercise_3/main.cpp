#include <array>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   array<int, 10> moredata{1, 2, 3, 4, 5 ,6 ,7 ,8 ,9 ,10};
   array<int, 10> otherdata{};
   int temp = 0;

   cout << "Size of moredata object: " << sizeof(moredata) << endl;
   cout << "Size of int[4] C array:  " << sizeof(int[4]) << endl << endl;

   cout << "moredata = ";
   // C++03
   for (int e: moredata) {
      cout << e << " ";
   }
   cout << endl;
   for (int e: moredata) {
      temp = temp + e;
   }
   cout << "Total data in array = " << temp << endl;
   temp = temp/moredata.size();
   cout << "Avarage of the array = " << temp << endl;

   for (int e: moredata) {
      temp = 0;
      if (temp < e)
      {
         temp = e;
      }
   }
   cout << "Largest number in the array = " << temp << endl;
   otherdata = moredata;
   cout << "Coppied array = ";
   for (int e: otherdata) {
      cout << e << " ";
   }
   cout << endl;

   return 0;
}
