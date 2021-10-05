#ifndef __ARRAY__
#define __ARRAY__

class Array { // hw5_1 추가 내용입니다.
protected:
	int* data;
	int len;
public:
	Array(int size);
	~Array();

	int length() const;

	int& operator[](int i);
	int operator[](int i)const;

	void print();
};
#endif
#pragma once
