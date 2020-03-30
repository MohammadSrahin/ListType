#include<iostream>
using namespace std;


class listType
{
	int size = 0;
	int length = 0;
	int* list = NULL;

public:
	listType(int x);
	~listType();
	bool isEmpty();
	bool isFull();
	int getMaxSize();
	int getLength();
	void insert(int a);
	int search(int b);
	void initialize();
	void print();

};

listType::listType(int x)
{
	if (x >= 0)
		size = x;
	list = new int[size];
	length = 0;
}

listType::~listType()
{
	delete[] list;
}

int listType::getMaxSize()
{
	return size;
}

int listType::getLength()
{
	return length;
}

bool listType::isEmpty()
{
	if (length == 0)
		return 1;
	else return 0;
}

bool listType::isFull()
{
	if (length == size)
		return 1;
	else return 0;
}

void listType::insert(int a)
{
	if (isFull() == 0)
	{
		list[length] = a;
		length++;
	}
}

int listType::search(int b)
{
	for (int i = 0; i < size; i++)
		if (list[i] == b)
			return i;

	 return -1;
}

void listType::initialize()
{
	delete[] list;

	list = new int[size];
	length = 0;
}

void listType::print()
{
	for (int i = 0; i < size; i++)
		if (list[i] >= 0)
			cout << list[i] << " ";
		else cout << "0" << " ";

}
int main()
{
	listType obj1(100);
	obj1.insert(5);
	cout << endl; 
	obj1.insert(4);
	obj1.print();
	cout << obj1.search(4);

}