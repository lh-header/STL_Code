#include<iostream>
#include"myvector.h"

using namespace std;

int main()
{
	MyVector<int> myVector;
	myVector.reserve(1);
	cout << "��ʼ������" << myVector.capacity() << endl;
	for (int i = 0; i < 10; i++)
	{
		myVector.push_back(i);
	}
	cout << "����Ϊ��" << myVector.capacity() << endl;
	cout << "Ԫ�ظ�����" << myVector.size() << endl;
	cout << "����Ԫ�أ�";
	for (int j = 0; j < myVector.size(); j++)
	{
		cout << myVector[j] << " ";
	}
	cout << endl;
	for (int k = 10; k > 4; k--)
	{
		myVector.pop_back();
	}
	cout << "����Ϊ��" << myVector.capacity() << endl;
	cout << "Ԫ�ظ�����" << myVector.size() << endl;
	cout << "����Ԫ�أ�";
	for (int j = 0; j < myVector.size(); j++)
	{
		cout << myVector[j] << " ";
	}
	cout << endl;
	myVector.clear();
	cout << "Ԫ�ظ�����" << myVector.size() << endl;
	system("pause");
	return 0;

}