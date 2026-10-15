#pragma once
#include <cstdlib> 
#include <ctime>

class Array
{
private:
	unsigned int _min_value;
	unsigned int _max_value;
	unsigned int _min;
	unsigned int _max;
	unsigned int _sumChet;
	unsigned int _size;
	float* _array;
	void createrRandomArray();
	unsigned int min();
	unsigned int max();
	unsigned int sumChet();

public:
	Array(unsigned int size, unsigned int min_value, unsigned max_value);
	~Array();
	unsigned int getMin();
	unsigned int getMax();
};