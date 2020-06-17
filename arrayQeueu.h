#pragma once
template <class T, int modyfikalnyRozmiarBuforu> class ArrayQueue
{
public:
	//pola
	T Storage[modyfikalnyRozmiarBuforu];
	int First, Last;
	//konstruktor
	ArrayQueue()
	{
		First = Last = -1;
	}
	//metody://
	bool isEmpty()
	{
		if (First == -1) return true;
		else return false;
	}
	bool isFull()
	{
		if ((First == 0 && Last == modyfikalnyRozmiarBuforu - 1) || Last == First - 1)
			return true;
		else
			return false;
	}
	void enqueue(T el);
	T dequeue();
};
template<class T, int modyfikalnyRozmiarBuforu>
inline void ArrayQueue<T, modyfikalnyRozmiarBuforu>::enqueue(T el)
{
	if (!isFull())
	{
		if (Last == modyfikalnyRozmiarBuforu - 1 || Last == -1)
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
		std::cout << "Kolejka jest pełna!" << std::endl;
}

template<class T, int modyfikalnyRozmiarBuforu>
inline T ArrayQueue<T, modyfikalnyRozmiarBuforu>::dequeue()
{
	T smth = 0;
	if (!isEmpty()) {
		if (First == Last + 1) {
			std::cout << "Kolejka opróżniona";
		}
		else
		{
			smth = Storage[First];
			First++;
			if ((First == 0 && Last == modyfikalnyRozmiarBuforu - 1) || Last == First - 1)
				First = Last = -1;
		}
	}
	else {
		std::cout << "Kolejka jest pusta!" << std::endl;
	}
	return smth; 
}