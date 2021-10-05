#include <iostream>
using namespace std;
#include "RangeArray.h"

RangeArray::RangeArray(int i, int j) :Array(j - i + 1)
{
	low = i;
	high = j;
}

RangeArray::~RangeArray()
// 여기는 별도의 기능 필요X -> 이후 Array 소멸자에서 메모리 해제가 이뤄짐
{

}

int RangeArray::baseValue()
{
	return low;
}
int RangeArray::endValue()
{
	return high;
}
int& RangeArray::operator [](int i)
{
	return Array::operator [](i - low);
}
int RangeArray::operator [](int i) const
{
	return Array::operator [](i - low);
}
