//WAP to demostrate of accesibility of diff mem in class
#include<iostream.h>
class first
  {
   private:
     int x;
   protected:
     int y;
   public:
     int z;
  };
void main()
  {
   cout<<sizeof(first);
   first f1;
   cout<<sizeof(f1);
   //f1.x=10;//Error
   //f1.y=20;//Error
   f1.z=30;
  }
