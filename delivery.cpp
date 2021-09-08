// delivery.cpp
// Benjamin Stream
// 2021-09-07
// For CS 311 Fall 2021
// cpp for class delivery

#include "delivery.h"

// Global Operators ( <<, ==, !=)
std::ostream& operator<<(std::ostream& str, const Delivery& obj)
{
	str << obj.getName();
	str << " (";
	str << obj.getQuantity();
	str << "), ";
	assert(obj.getMonth() >= 1);
	if (obj.getMonth() == 1) str << "Jan";
	if (obj.getMonth() == 2) str << "Feb";
	if (obj.getMonth() == 3) str << "Mar";
	if (obj.getMonth() == 4) str << "Apr";
	if (obj.getMonth() == 5) str << "May";
	if (obj.getMonth() == 6) str << "Jun";
	if (obj.getMonth() == 7) str << "Jul";
	if (obj.getMonth() == 8) str << "Aug";
	if (obj.getMonth() == 9) str << "Sep";
	if (obj.getMonth() == 10) str << "Oct";
	if (obj.getMonth() == 11) str << "Nov";
	if (obj.getMonth() == 12) str << "Dec";
	return str;

}

bool operator==(Delivery const& lhs, Delivery const& rhs)
{
	//Checks the left and right sides private variables and compares them.
	if (lhs.getName() == rhs.getName()) {
		if (lhs.getMonth() == rhs.getMonth()) {
			if (lhs.getQuantity() == rhs.getQuantity()) {
				return true;
			}
		}
	}
	return false;
}

bool operator!=(Delivery const& lhs, Delivery const& rhs)
{
	// Returns the opposite value of the == operator.
	return !(operator==(lhs, rhs));
}


// Set Functions (setName setQuantity setMonth)
void Delivery::setName(std::string name)
{
	_name = name;
}

void Delivery::setQuantity(int quantity)
{
	_quantity = quantity;
}

void Delivery::setMonth(int month)
{
	_month = month;
}

// Get Functions (getName getQuantity getMonth)

std::string Delivery::getName() const
{
	return _name;
}

int Delivery::getQuantity() const
{
	assert(_quantity >= 0);
	return _quantity;
}

int Delivery::getMonth() const
{
	assert(_month >= 1);
	return _month;
}
// Extra functions (empty and toString)
bool Delivery::empty() const
{
	if (_quantity == 0)
	{
		return true;
	}
	return false;
}

std::string Delivery::toString() const
{
	// Padding to format for the Name (Quantity), Month
	std::string toString= _name + " (" + std::to_string(_quantity) + "), ";
	assert(_month >= 1);
	if (_month == 1) toString += "Jan";
	if (_month == 2) toString += "Feb";
	if (_month == 3) toString += "Mar";
	if (_month == 4) toString += "Apr";
	if (_month == 5) toString += "May";
	if (_month == 6) toString += "Jun";
	if (_month == 7) toString += "Jul";
	if (_month == 8) toString += "Aug";
	if (_month == 9) toString += "Sep";
	if (_month == 10) toString += "Oct";
	if (_month == 11) toString += "Nov";
	if (_month == 12) toString += "Dec";
	return toString;
}
