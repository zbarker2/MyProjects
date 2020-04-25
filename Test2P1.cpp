#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
// To do this for the integer values comment out the first block and uncomment the second block.

// Start enum block
/*enum Day {Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
enum Month {January = 1, February, March, April, May, June, July, August, September, October, November, December};
int main()
{
	int Date = Saturday ;
	int cMonth = July;
	cMonth++;
	Date = August % Date;
	cMonth = August / Date;
	Date += cMonth;
	cMonth -= Tuesday;
	cMonth += Thursday;
	Date--;
	Date += February;
	cMonth = (October / Tuesday + Wednesday) * March / December;
	if (Date == Sunday && cMonth == February) {
		cout << "Get Ready for the Superbowl" << endl;
	}
	return 0;
}*/
/*int main()
{
	int Days[] = { 1,2,3,4,5,6,7 };
	int Months[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int dDay = 7;
	int dMonth = 2;
	int Date = Days[5];
	int cMonth = Months[6];
	cMonth++;
	Date = Months[7] % Date;
	cMonth = Months[7] / Date;
	Date += cMonth;
	cMonth -= Days[1];
	cMonth += Days[3];
	Date--;
	Date += Months[1];
	cMonth = (Months[9] / Days[1] + Days[2]) * Months[2] / Months[11];
	if (Date == dDay && cMonth == dMonth) {
		cout << "Get Ready for the Superbowl" << endl;
	}
	return 0;
}*/
//using enums helps with the readability of code in some cases. For example if you have error codes on a machine, you can set enums equal to those values so that the code can use the error codes instead of just the numbers.



