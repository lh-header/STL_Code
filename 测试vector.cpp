#include<iostream>
#include"myvector.h"

using namespace std;

int main()
{
	MyVector<int> myVector;
	myVector.reserve(1);
	cout << "初始容量：" << myVector.capacity() << endl;
	for (int i = 0; i < 10; i++)
	{
		myVector.push_back(i);
	}
	cout << "容量为：" << myVector.capacity() << endl;
	cout << "元素个数：" << myVector.size() << endl;
	cout << "数组元素：";
	for (int j = 0; j < myVector.size(); j++)
	{
		cout << myVector[j] << " ";
	}
	cout << endl;
	for (int k = 10; k > 4; k--)
	{
		myVector.pop_back();
	}
	cout << "容量为：" << myVector.capacity() << endl;
	cout << "元素个数：" << myVector.size() << endl;
	cout << "数组元素：";
	for (int j = 0; j < myVector.size(); j++)
	{
		cout << myVector[j] << " ";
	}
	cout << endl;
	myVector.clear();
	cout << "元素个数：" << myVector.size() << endl;
	system("pause");
	return 0;

}