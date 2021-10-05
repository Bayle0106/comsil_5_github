#ifndef MTT
#define MTT
#include "Array.h"

class RangeArray : public Array { // hw5_3 추가 내용입니다.
protected:
	int low;
	int high;
public:
	RangeArray(int, int);
	~RangeArray();

	int baseValue();
	int endValue();

	int& operator[](int);
	int operator[](int) const;

};
#endif
