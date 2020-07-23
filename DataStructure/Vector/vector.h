#pragma once

template<typename Data>

class vector
{
public:
	Data* base;
	size_t capacity;	//����� ũ��
	size_t sz;		//���� �ڷ� ����

	void push_back(Data val)
	{
		//����� �� ���� 2��� �ø�
		if(capacity == sz)
		{
			capacity *= 2;
			Data* tmp = new Data[capacity];
			for (int i = 0; i < sz; i++)
			{
				tmp[i] = base[i];
			}
			delete[] base;
			base = tmp;
			//capacity�� 1��Ʈ �������� �ű�
			capacity <<= 1;
		}

		base[sz++] = val;
	}

	bool full()
	{
		return sz == capacity;
	}

	

	void pop_back()
	{
		if (!sz)
			return;
		
		base[--sz] = 0;
	}

	int size()
	{
		return sz;
	}

	Data back()
	{
		return base[sz - 1];
	}
		
	bool empty()
	{
		return !sz;
	}

	void clear()
	{
		sz = 0;
	}

	//�ε����� ã�� operator ����
	Data operator[] (int i)
	{
		return base[i];
	}

	vector()
	{
		capacity = 32;
		sz = 0;
		base = new Data[capacity];
	}
	~vector() { delete[] base; }
};

