#include <iostream>
using namespace std;

int main()
{
   
   for(;;)
   {
      int year[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
      string week[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
      int month=0, day=0, sum=0 , date=0;
      cin >> month>>day;
      for( int i = 0; i < (month-1) ; i++ )
      {
         sum += year[ i ];   
      }
      date = ( sum + day +4 ) % 7;
      cout << week[ date ];
   }

}

