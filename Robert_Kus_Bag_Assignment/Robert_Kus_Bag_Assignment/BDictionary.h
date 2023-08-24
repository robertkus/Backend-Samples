/*
* File:   BDictionary.h -- implement a dictionary use an array-based bag
* Author: Prof Terri Sipantzi
*
* You may use this template to implement your Dictionary
*/

#ifndef BDICTIONARY_H
#define	BDICTIONARY_H

#include "ABag.h"
#include "dictionaryADT.h"
#include "kvpair.h"

template <typename Key, typename E>
class BDictionary : public Dictionary<Key, E> {
public:
	//Default Constructor
	BDictionary() {
		dictionary = new ABag<KVpair<Key, E>>;
	}

	//Parameter-based Constructor
	BDictionary(const size_t size) {
		dictionary = new ABag<KVpair<Key, E>>(size);
	}

	//Destructor
	~BDictionary() {
		delete[] dictionary;
	};

	void clear() {
		dictionary->emptyBag();
	}

	bool insert(const Key& k, const E& e) {
		if (dictionary->size() < dictionary->bagCapacity()) {
			dictionary->addItem({ k, e });
			return true;
		}
		return false;
	}

	bool remove(const Key& k, E& rtnVal) {
		KVpair<Key, E> newKeyValuePair(k, rtnVal);
		return dictionary->remove(newKeyValuePair);
	}

	bool removeAny(E& returnValue) {
		KVpair<Key, E> newKeyValuePair;
		;
		if (dictionary != nullptr && dictionary->removeTop(newKeyValuePair)) {
			returnValue = newKeyValuePair.value();
			return true;
		}
		return false;
	}

	bool find(const Key& k, E& returnValue) const {
		KVpair<Key, E> newKeyValuePair(k, returnValue);
		return dictionary->find(newKeyValuePair);
	}

	int size() {
		return dictionary->size();
	}

private:
	//Pointer to a ABag object.  You'll need to instantiate the bag in your constructor:
	// dictionary = new ABag<KVpair<Key, E>>(size) or something similar depending on how
	// you've implemented your ABag constructor(s).
	//This pointer gives you access to the bag which stores your data and provides the 
	//functions you need to build your dictionary.
	ABag<KVpair<Key, E>>* dictionary;
};


#endif	/* BDICTIONARY_H */

