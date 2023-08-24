/*
 * File:   LRUBufferPool.h
 * Author: Robert Kus
 *
 * Created on August 5, 2023
 * 
 *  The LRUBufferPool.h file includes the LRUBufferPool class, inheriting and defining the properties and functions from the BufferPoolADT class.
 * 
 */

#include "BufferPoolADT.h"
#include "BufferBlock.h"
#include "constants.h"
#include <iostream>
#include <fstream>

class LRUBufferPool : public BufferPoolADT
{
private:
	fstream dataFile;
	BufferBlock bufferPool[POOL_SIZE];   //Set the size of the bufferPool array to 5
public:
	// Default Constructor
	LRUBufferPool() {}

	// Constructor using parameters
	LRUBufferPool(std::string filename, int poolSize = 5, int blockSize = 4096)
	{
		// Open test file and obtain data, setting the bufferPool array in the process
		dataFile.open(filename.c_str(), fstream::in | fstream::binary);
		for (int i = 0; i < poolSize; i++)
		{
			bufferPool[i].setID(i);
			char* data = new char[blockSize];
			dataFile.read(data, blockSize);
			bufferPool[i].setBlock(data);
		}
	}

	//Destructor. Closes the open file and deletes the bufferPool array to prevent data leaks in 
	//addition to destroying the LRUBufferPool object
	~LRUBufferPool() {
		dataFile.close();
		delete[] bufferPool;
	}

	void getBytes(char* space, int sz, int pos) {
		int id = pos / BLOCKSIZE;

		// find the correct block
		int index = -1;
		for (int i = 0; i < POOL_SIZE; i++) {
			if (bufferPool[i].getID() == id) {
				index = i;
			}
		}

		if (index < 0) {
			//read the file
			char* data = new char[BLOCKSIZE];

			//reorder the bufferPool with seekj function and use the product of the id number and BLOCKSIZE as a parameter
			dataFile.seekg(id * BLOCKSIZE);
			//read the data in the block
			dataFile.read(data, BLOCKSIZE);

			//set the id and block from the fourth bufferPool item
			bufferPool[4].setID(id); 
			bufferPool[4].setBlock(data);
		}

		int currentIndex = index >= 0 ? index : 4;
		BufferBlock temporaryBlock = bufferPool[currentIndex];

		for (int i = currentIndex; i > 0; i--)
		{
			bufferPool[i] = bufferPool[i - 1];
		}

		bufferPool[0] = temporaryBlock;

		// Get the data only if the block is not in the bufferPool
		bufferPool[0].getData(pos % BLOCKSIZE, sz, space);
	}

	// get the id of the last block (the leasy recently used)
	int getLRUBlockID() {
		return bufferPool[4].getID();
	}

	// prints the blocks in the order of the most recently used to LRU
	void printBufferBlockOrder() {
		cout << "My buffer block order from most recently used to LRU is: " << endl;
		cout << "   ";
		for (int i = 0; i < POOL_SIZE; i++)
		{
			cout << bufferPool[i].getID() << ", ";
		}
		cout << endl << endl;
	}
};