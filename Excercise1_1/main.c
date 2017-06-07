#include <stdio.h>

void hexdumpInt(int data);
void hexdumpDouble(double data);

int main(void)
{
   int i1 = 0;
   int i2 = 1;
   int i3 = 255;

   printf("This is how signed integers are represented in the memory:\n\a");
   hexdumpInt(i1);
   hexdumpInt(i2);
   hexdumpInt(-i2);
   hexdumpInt(i3);
   hexdumpInt(-i3);

   double d1 = 0;
   double d2 = 1;
   double d3 = 255;

   printf("\nThis is how signed doubles are represented in the memory:\n");
   hexdumpDouble(d1);
   hexdumpDouble(d2);
   hexdumpDouble(-d2);
   hexdumpDouble(d3);
   hexdumpDouble(-d3);
   printf("\n");

   return 0;
}

void hexdumpInt(int data)
{
   size_t i = 0;
   const unsigned char *pData = (const unsigned char*)&data;

   printf("%10d = ", data);
   for (i = 0; i < sizeof(int); i++)
   {
      printf("%02x ", pData[i]);
   }
   printf("\n");
}

void hexdumpDouble(double data)
{
   size_t i = 0;
   const unsigned char *pData = (const unsigned char*)&data;

   printf("%10.0f = ", data);
   for (i = 0; i < sizeof(double); i++)
   {
      printf("%02x ", pData[i]);
   }
   printf("\n");
}
