// Name:           Thomas Richards.
// Lab:            project 02 
// Due Date:       11-5-24
// Filename:       main.cpp
// Description: 

#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
  if (year % 100 == 0)\
    if (year % 400 == 0)
      return true;
    else
      return false;
  else
    if (year % 4 == 0)
      return true;
    else
      return false;
}

int daysInTheMonth(int month, int year)
{
  if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    return 31;
  if (month == 2)
  {
  if (isLeapYear(year))
    return 29;
    else
    return 28;
  }
  return 30;
}
bool isValidDate (int month, int day, int year)
{
    if (month < 1 || month > 12)
      return false;
    if (month == 2)
    {
    if (month == 2)
  {
  if (isLeapYear(year)) 
  {
    if (day <= 29)
      return true;
    }
    else
    {
      if (day <= 28)
        return true;
    }  
  }
  else if (day <= daysInMonth (month, year)) 
    return true;
  return false;
}

  int main() 
{
  int month day, year, days = 0)
  char temp;
  cout << "Enter date in the form: month-day-year: ";
  cin >> month;
  cin >> temp;
  cin >> day;
  cin >> temp
  cin >> year;

while (!isValidDate(month, day, year))
{
  cout << "The date entered is invalid." << endl;
  cout << "Enter date (form: month/day/year): ";
  cin >> month;
  cin >> temp;
  cin >> day;
  cin >> temp;
  cin >> year;
}

for (int i = 1; i < month; i++)
{ 
   if (i == 2)
   { 
      if(isLeapYear(year))
        days +=29;
      else
        days +=28;
   }
  else
     days += daysInMonth(i, year);
  }
  days += day;

  cout << "this is day number " << days << " of the year " << year << endl;

  return 0;
}
  
