#include "stack.h"


Stack::Stack(int n)
{
	pitems = new Item[n];
	size = n;
	top = 0;
}

Stack::Stack(const Stack& st)
{
	size = st.size;
	pitems = new Item[size];
	for (int i = 0; i < size; i++)
	{
		pitems[i] = st.pitems[i];
	}
	top = st.top;
}

Stack::~Stack()
{
	delete[] pitems;
}

bool Stack::isempty()const {
	return top == 0;
}
bool Stack::isfull()const {
	return top == MAX;
}
bool Stack::push(const Item& item) {
	if (top < MAX)
	{
		pitems[top++] = item;
		return true;
	}
	else
	{
		return false;
	}
}
bool Stack::pop(Item& item) {
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
	{
		return false;
	}
}

Stack& Stack::operator=(const Stack& st)
{
	if (this == &st)
	{
		return *this;
	}
	delete pitems;
	size = st.size;
	pitems = new Item[size];
	for (int i = 0; i < size; i++)
	{
		pitems[i] = st.pitems[i];
	}
	top = st.top;
	return *this;
}
