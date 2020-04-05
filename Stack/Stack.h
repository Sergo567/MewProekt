#pragma once
#include <iostream>

using namespace std;
template <class T>
class Stack
{
private:
	int size;
	T *mem;
	int last;
public:
	Stack <T>(int _size = 0)
	{
		size = _size;
		last = 0;
		mem = new T[size];
		for (int i = 0; i < size; i++)
		{
			mem[i] = 0;
		}
	}
	Stack <T>(const Stack <T> &tmp)
	{
		size = tmp.size;
		last = tmp.last;
		mem = new T[size];
		for (int i = 0; i < size; i++)
		{
			mem[i] = tmp.mem[i];
		}
	}
	Stack &operator = (const Stack <T> &tmp)
	{
		if (size != tmp.size)
		{
			if (size)
			{
				delete[]mem;
			}
			size = tmp.size;
			mem = new T[size];
		}
		last = tmp.last;
		for (int i = 0; i < size; i++)
		{
			mem[i] = tmp.mem[i];
		}
		return *this;
	}
	~Stack <T>()
	{
		delete[]mem;
	}
	void push(T tmp) //вставка 
	{
		if (last < size)
		{
			mem[last++] = tmp;
		}
	}
	T pop() //удалить 
	{
		if (last > 0)
		{
			return mem[--last];
		}
		else throw - 1;
	}
	T top() //посмотреть верх 
	{
		if (last > 0) return mem[last - 1];
		else throw - 1;
	}
	int IsEmpty()
	{
		if (last == 0) return 0; //да, стек пуст 
		else return 1; //стек не пуст 
	}
	int IsFull()
	{
		if (last < size) return 0; //стек не полон 
		else return 1; //стек полон 
	}
};