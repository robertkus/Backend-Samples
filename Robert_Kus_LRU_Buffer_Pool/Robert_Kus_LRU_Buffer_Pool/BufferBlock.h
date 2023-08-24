/*
 * File:   BufferBlock.h
 * Author: Robert Kus
 *
 * Created on August 5, 2023
 * 
 * The BufferBlock.h file includes the BufferBlock class, inheriting and defining the properties and functions from the BufferBlockADT class.
 */

#include "BufferBlockADT.h"
#include "constants.h"

#ifndef BUFFERBLOCK_H
#define	BUFFERBLOCK_H

class BufferBlock : public BufferblockADT
{
private:
	//Initialize properties here, using setters in constructor when needed
	int blockId = 0;
	char* block = nullptr;
public:
	//Default Constructor
	BufferBlock() {}

	//Parameter-based constructor
	BufferBlock(char* data, int snz = 4096) {
		// Initialize block using parameter data
		initializeCharArray(snz, data);
	}

	//Destructor
	~BufferBlock() {}

	//reads the block and its data from its curent position to the last position
	void getData(int pos, int sz, char* data) {
		int lastPosition = pos + sz > getBlocksize() ? lastPosition = getBlocksize() - 1 : lastPosition = pos + sz;

		for (int i = 0; i + pos < lastPosition; i++) {
			data[i] = block[i + pos];
		}
	}

	// Set ID function
	void setID(int id) {
		blockId = id;
	}
	// Get ID function
	int getID() const {
		return blockId;
	}

	//Measures the size of a block as long as it doesn't equal '\0'
	int getBlocksize() const {
		int blockIndex = 0;
		while (block[blockIndex] != '\0')
		{
			blockIndex++;
		}
		return blockIndex;
	}

	// get and return the block
	char* getBlock() const {
		return block;
	}
	// Set block function
	void setBlock(char* blk) {
		block = blk;
	}

};

#endif	/* BUFFERBLOCK_H */