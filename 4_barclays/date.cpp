#include"date.hpp"

bool Date::operator <(const Date &a) const {
	if (this->year < a.year)
		return true;
	else if (this->year > a.year)
		return false;
	else if (this->month < a.month)
		return true;
	else if (this->month > a.month)
		return false;
	else if (this->day < a.day)
		return true;
	else if (this->day > a.day)
		return false;
	else
		return false;
}

double Date::operator -(const Date &a) const {
	int day_diff = (this->year - a.year) * 360 + (this->month - a.month) * 30
			+ (this->day - a.day);
	double res = double(day_diff) / (double) 360;
	return res;
}
