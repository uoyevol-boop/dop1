#include "Array.h"

Array::Array(unsigned int size, unsigned int min_value, unsigned max_value)
{
	_size = size;
	_min_value = min_value;
	_max_value = max_value;
	_array = new float[_size];
	createrRandomArray();
	_min = min();
	_max = max();
	_sumChet = sumChet();
}

Array::~Array()
{
	
}

void Array::createrRandomArray() {
	srand(time(0));
	for (size_t i = 0; i < _size; i++) {
		_array[i] = rand() % _min_value + _max_value;
	}
}

unsigned int Array::min() {
	unsigned int min_value = _max_value;

	for (size_t i = 0; i < _size; i++) {
		if (_array[i] < min_value)
			min_value = _array[i];
	}
	return min_value;
}

unsigned int Array::max() {
	unsigned int max_value = _min_value;
	for (size_t i = 0; i < _size; i++) {
		if (_array[i] > max_value)
			max_value = _array[i];
	}
	return max_value;
}

unsigned int Array::sumChet() {
	for (size_t i = 0; i < _size; i++) {
		if (_size[i] % 2 == 0) sum += _array[i];
	}
	return sum;
}