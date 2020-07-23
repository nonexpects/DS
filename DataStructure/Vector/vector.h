#pragma once

template<typename Data>

class vector
{
public:
	Data* base;
	size_t capacity;	//저장소 크기
	size_t sz;		//보관 자료 개수

	void push_back(Data val)
	{
		//사이즈가 꽉 차면 2배로 늘림
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
			//capacity를 1비트 왼쪽으로 옮김
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

	//인덱스로 찾게 operator 지정
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

