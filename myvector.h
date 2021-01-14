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

	// 重新设置容量大小
	void reserve(size_t n)
	{
		if (n > _capacity)
		{
			data = new T[n];
			_capacity = n;
		}
	}

	// 向数组中插入元素
	void push_back(T n)
	{
		// 判断当前容量
		if (_size == _capacity)
		{
			// 进行扩容
			resize(2 * _capacity);
		}
		data[_size++] = n;
	}

	// 删除数组尾部数据并返回值，动态调整内存大小
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

	// 获取当前元素个数
	size_t size()
	{
		return _size;
	}

	// 判断数组是否为空
	bool empty()
	{
		return _size == 0 ? 1 : 0;
	}

	// 重载[]运算符
	int &operator[](int i)
	{
		return data[i];
	}

	// 获取数组容量大小
	size_t capacity()
	{
		return _capacity;
	}

	// 清空数组
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
	T *data;            // 实际存储数据的数组
	size_t _capacity;   // 容量
	size_t _size;       // 实际元素个数
};

#endif