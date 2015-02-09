// Stack.cpp
#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack(int n)
{
	size = n;
	top = 0;
	pitems = new Item[n];
}

/*
Stack::Stack(const Stack & st)
{
	size = st.size;
	top = st.top;
	pitems = new Item[size];
	for (int i = 0;)
}
*/

Stack::~Stack(){ delete[]pitems; }

bool Stack::isempty()const{ return top == 0 ? true : false; }
bool Stack::isfull()const{ return top == size ? true : false; }

bool Stack::push(const Item & item)
{
	if (top < size)
	{
		pitems[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item & item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
		return false;
}