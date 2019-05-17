#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;

class Stack
{
public:
	Stack(int count);
	Stack(const Stack &other);
	Stack(Stack &&other);
	Stack &operator=(const Stack &other);
	~Stack();	int &operator[](int index);
	friend ostream& operator<<(ostream& stream, const Stack& value);
	int GetSize();
	void Push(int value);
	int Pop();
	int Peek();

private:
	int *arr;
	int count, capacity;
};