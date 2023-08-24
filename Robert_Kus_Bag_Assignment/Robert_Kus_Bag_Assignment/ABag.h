/*
* File:   ABag.h
* Author: Prof Terri Sipantzi
*
* You may use this template to implement your ABag.
*/

#ifndef ABAG_H
#define	ABAG_H

#include "book.h"
#include "bagADT.h"
#include <iostream>

template <typename E>
class ABag : public Bag<E> {
public:
	//Default constructor
	ABag() {
		data = nullptr;
		capacity = 0;
		used = 0;
	}

	//Parameter-based constructor
	ABag(const size_t size) {
		data = nullptr;
		data = new E[size];
		capacity = int(size);
		used = 0;
	}

	//Destructor
	~ABag() {
		delete[] data;
	}

	bool addItem(const E& item) {
		if (used < capacity || used == capacity) {
			if (operator+=(item)) {
				used++;
				return true;
			}
		}
		return false;
	}

	bool remove(E& item) {
		for (int i = 0; i < used; i++) {
			if (data[i] == item) {
				item = data[i];
				for (i = 0; i < used; i++) {
					data[i] = data[i + 1];
				}
				used--;
				return true;
			}
		}
		return false;
	}

	bool removeTop(E& returnValue) {
		if (inspectTop(returnValue))
		{
			returnValue = data[used - 1];
			for (int i = used; i < capacity - 1; i++) {
				data[i] = data[i + 1];
				i++;
			}

			used--;
			return true;
		}
		return false;
	}

	bool find(E& returnValue) const {
		for (int i = 0; i < capacity - 1; i++) {
			if (data[i] == returnValue) {
				returnValue = data[i];
				return true;
			}
		}
		return false;
	}

	bool inspectTop(E& item) const {
		if (used > 0) {
			item = data[used-1];
			return true;
		}
		return false;
	}

	void emptyBag() {
		delete[] data;
		used = 0;
		data = new E[capacity];
	}

	bool operator+=(const E& addend) {
		if (used < capacity) {
			data[used] = addend;
			return true;
		}
		return false;
	}

	int size() const {
		return used;
	}

	int bagCapacity() const {
		return capacity;
	}

private:
	E* data;            // an array of items
	int used;           // number of items the data array currently holds
	int capacity;       // the number of items the bag can hold (size of array)
};

#endif	/* ABAG_H */

