/*
 * payment.hpp
 *
 *  Created on: 8 Mar 2020
 *      Author: peter
 */

#ifndef PAYMENT_HPP_
#define PAYMENT_HPP_
#include"date.hpp"
#include<math.h>


class Payment {
	Date date;
	double amount, rate;
public:
	Payment(const Date &date, double amount, double rate);
	double value(const Date &date_exp);
};

Payment::Payment(const Date &date, double amount, double rate) {
	this->date = Date(date);
	this->amount = amount;
	this->rate = rate;
}

double Payment::value(const Date &date_exp) {
	return this->amount * exp(-1 * this->rate * (date_exp - this->date));
}





#endif /* PAYMENT_HPP_ */
