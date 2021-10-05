#include "Array.h"
#include <cstdlib>
#include<iostream>
#include<malloc.h>
#include<stdio.h>
using namespace std;
Array::Array(int size)
{
	//����� Ȯ���ϰ� ����̸� new�� ����Ͽ� �迭 data�� �Ҵ�, len�� �ʱ�ȭ
	if (size < 0)
	{
		cout << "Wrong size" << endl;
		exit(1);//size�� ũ�Ⱑ ������ ��� ���α׷� ����
	}
	else
	{
		data = new int[size]();//�ʱ�ȭ: ��� ���� 0���� �ʱ�ȭ
		len = malloc_usable_size(data) / sizeof(int);
	}
}
Array::~Array()
{
	// �Ҹ���; �Ҵ�� �޸� ����
	delete[] data;

}
int Array::length() const
{
	// �迭�� ũ�� ����
	return len;
}

// �迭�� ���Ҹ� �����ϰų� ���� ��ȯ�ϴ� �κ����� []�������� �����ε��̴�
int& Array::operator[](int i) // �迭�� ���� ����
{
	static int tmp;

	// �迭�� �ε����� ���� ���� ������ �� ����, �׷��� ������ �����޼��� ����ϰ� tmp����
	if (i >= 0 && i < len)
	{
		return data[i];//data[i]�� �ּҸ� ���� -> main���� a[i]=i + 1���� �ּҰ��� ���� �Ҵ��
	}
	else
	{
		cout << "Array bound error!!" << endl;
		return tmp;
	}
}

int Array::operator[](int i) const // �迭�� ���Ұ� ��ȯ
{
	//�迭�� �ε����� ���� ���� ������ ���� ����, �׷��� ������ �����޼��� ����ϰ� 0�� ����
	if (i >= 0 && i < len)
	{
		return data[i];
	}
	else
	{
		cout << "Array bound error!!" << endl;
		return 0;
	}
}
void Array::print() //�迭�� ��� ������ ������ִ� �Լ�
{
	int i;
	cout << "[";
	for (i = 0; i < len; i++) {
		cout << " " << data[i];
	}
	cout << " ]" << endl;
}
// hw5_1의 추가내용입니다.