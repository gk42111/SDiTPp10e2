#pragma once
template <class T>
class ArrayQeueu
{
public:
	//pola
	T Storage[100];
	int First, Last;
	//konstruktor
	ArrayQeueu() { First = Last = -1; }
	//metody:
	bool isEmpty()
	{
		if (First == -1) return true;
		else return false;
	}
	bool isFull()
	{
		if ((First == 0 && Last == 100 - 1) || Last == First - 1)
			return true;
		else
			return false;
	}
	void enqueue(T el);
	T dequeue();
};
template<class T>
inline void ArrayQeueu<T>::enqueue(T el)
{
	if (!isFull())
	{
		if (Last == 100 - 1 || Last == -1)
		{
			Storage[0] = el;
			Last = 0;
			if (First == -1)
			{
				First = 0;
			}
		}
		else Storage[++Last] = el;
	}
	else
		std::cout << "Kolejka jest pe³na!" << std::endl;
}

template<class T>
inline T ArrayQeueu<T>::dequeue()
{
	return Storage[First];
}
