#include<iostream>
using namespace std;
class Array
{
public:
	int size;
	int* arr;
	int index;
	//int value;
	Array(int);
	void insert(int);
	void regrow(int);
	void delete1( int);
	int search(int);
	void print();
};
Array::Array(int a)
{
	index = 0;
	size = a;
	arr = new int[size];
}


void Array::insert(int a)
{
	//cout << size << endl;
	if (index <size)
	{
		arr[index] = a;
		index++;
	}
	else
	{
		regrow(a);
		index++;
	}
}
void Array::regrow(int c)
{
	size = size + 1;
	int* arr2 = new int[size ];
	for (int i = 0; i < size-1; i++)
	{
		//cout << "hi";
		arr2[i] = arr[i];
	}
	//cout << "size" << size;
	arr2[size-1] = c;
	arr = arr2;
	
}
void Array::delete1(int e)
{
	for (int i = search(e); i < size; i++)
	{
		arr[i] = arr[i + 1];
	}
	index--;
}

int Array::search(int f)
{
	int b = 0;
		while (arr[b] != f)
		{
			b = b + 1;
		}
		return b;
}

void Array::print()
{
	for (int i = 0; i < index; i++)
	{
		cout << arr[i] << endl;
	}
}



int main()
{
	Array a1(3);
	a1.insert(1);
	a1.insert(2);
	a1.insert(3);
	a1.insert(4);
	a1.delete1(3);
	//a1.insert(5);
	a1.print();
}






