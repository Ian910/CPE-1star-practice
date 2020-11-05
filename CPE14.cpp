#include <iostream>
using namespace std;

int main()
{
   
        int year[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        string week[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
        int month = 0, day = 0, sum = 0, date = 0;
        int numcases;
        while (cin >> numcases)
        {
            for (int i = 0; i < numcases; i++)
            {
                cin >> month >> day;
                
                date = 0;
                sum = 0;
                for (int i = 0; i < (month - 1); i++)
                {
                    sum += year[i];
                }
                date = (sum + day + 4) % 7;
                cout << week[date]<<endl;         
            }
        }      
}
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
	char week[10][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int n;
	cin >> n;
	while(n--)
	{
		int mm, dd;
		cin >> mm >> dd;

		int w = 4;
		for(int i = 1; i < mm; i++)
			w += month[i-1];

		w = (w + dd) % 7;
		cout << week[w] << endl;
	}
	return 0;
}
