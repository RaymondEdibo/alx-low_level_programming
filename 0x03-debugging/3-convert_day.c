#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day)
{
switch (month)
{
case 2:
day = 31 + day;
Break;
case 3:
day = 59 + day;
Break;
case 4:
day = 90 + day;
Break;
case 5:
day = 120 + day;
Break;
case 6:
day = 151 + day;
Break;
case 7:
day = 181 + day;
Break;
case 8:
day = 212 + day;
Break;
case 9:
day = 243 + day;
Break;
case 10:
day = 273 + day;
Break;
case 11:
day = 304 + day;
Break;
case 12:
day = 334 + day;
Break;
Default:
Break;
}
return (day);
}
