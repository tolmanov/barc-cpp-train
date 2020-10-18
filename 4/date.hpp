#include<stdio.h>
#include<stdlib.h>

class Date{
private:
	int year, month, day;
public:
	Date(int year, int month, int day): year{year}, month{month}, day{day}{}
	Date(void){year = 0; month=0; day=0;}
	Date(const Date& date){year = date.year; month = date.month; day = date.day;}
	bool operator <(const Date& a) const;
	double operator -(const Date& a) const;
};
