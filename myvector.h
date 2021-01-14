#ifndef _MY_VECTOR_H_
#define _MY_VECTOR_H_

template<class T>
class MyVector
{
public:
	MyVector()
	{
		data = NULL;
		_capacity = 0;
		_size = 0;
	}
	~MyVector()
	{
		delete[] data;
	}

	// ��������������С
	void reserve(size_t n)
	{
		if (n > _capacity)
		{
			data = new T[n];
			_capacity = n;
		}
	}

	// �������в���Ԫ��
	void push_back(T n)
	{
		// �жϵ�ǰ����
		if (_size == _capacity)
		{
			// ��������
			resize(2 * _capacity);
		}
		data[_size++] = n;
	}

	// ɾ������β�����ݲ�����ֵ����̬�����ڴ��С
	T pop_back()
	{
		if (_size == 0)
			return 0;
		T temp = data[_size];
		_size--;
		if (_capacity / 4 >= _size)
		{
			resize(_capacity / 2);
		}
		return temp;
	}

	// ��ȡ��ǰԪ�ظ���
	size_t size()
	{
		return _size;
	}

	// �ж������Ƿ�Ϊ��
	bool empty()
	{
		return _size == 0 ? 1 : 0;
	}

	// ����[]�����
	int &operator[](int i)
	{
		return data[i];
	}

	// ��ȡ����������С
	size_t capacity()
	{
		return _capacity;
	}

	// �������
	void clear()
	{
		_size = 0;
	}
private:
	void resize(int st)
	{
		T *newData = new T[st];
		for (int i = 0; i < _size; i++)
		{
			newData[i] = data[i];
		}
		delete[] data;
		data = newData;
		_capacity = st;
	}

private:
	T *data;            // ʵ�ʴ洢���ݵ�����
	size_t _capacity;   // ����
	size_t _size;       // ʵ��Ԫ�ظ���
};

#endif