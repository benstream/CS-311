// delivery.h
// Benjamin Stream
// 2021-09-07
// For CS 311 Fall 2021
// Header for class delivery


#ifndef FILE_DELIVERY_H_INCLUDED
#define FILE_DELIVERY_H_INCLUDED

#include <iostream>
#include <string>
#include <cassert>

class Delivery {

	// Delivery: Friend Declarations
	friend
	bool operator==(Delivery const& lhs, Delivery const& rhs);
	friend
	bool operator!=(Delivery const& lhs, Delivery const& rhs);
	friend
		std::ostream& operator<<(std::ostream& str,
			const Delivery& obj);
	// Delivery: Ctor, ctor w params
public:

	//default ctor
	// Sets the default values of N:UNSPECIFIED, Q:0, M:1
	Delivery() {
		setName("UNSPECIFIED");
		setQuantity(0);
		setMonth(1);
	}

	//ctor with params
	Delivery(std::string name,int quantity,int month ) {
		setName(name);
		setQuantity(quantity);
		setMonth(month);
	}

public:

	//Delivery: ++ and -- Operators
	//pre [++op]
	Delivery & operator++() {
		assert(0 <= _quantity);
		++_quantity;
		return *this;

	}
	//post [op++]
	Delivery operator++([[maybe_unused]] int dummy) {
		assert(0 <= _quantity);
		auto save = *this;
		++(*this);
		return save;
	}
	//pre [--op]
	Delivery & operator--() {
		assert(0 <= _quantity);
		if (_quantity == 0) return *this;
		else --_quantity;
		return *this;

	}
	//post [op--]
	Delivery operator--([[maybe_unused]] int dummy) {
		assert(0 <= _quantity);
		auto save = *this;
		--(*this);
		return save;
	}
	//Delivery: General Functions
	
public:
	void setName(std::string name);
	void setQuantity(int quantity);
	void setMonth(int month);
	std::string getName() const;
	int getQuantity() const;
	int getMonth() const;
	bool empty() const;
	std::string toString() const;

private:
	std::string _name;
	int _quantity;
	int _month;

};

#endif  //#ifndef FILE_DELIVERY_H_INCLUDED