#include <queue>
#include <iostream>
#include "ArrayQeueu.h"
using namespace std;

int main() {
	ArrayQueue<int,5> MojaKolejka;
	MojaKolejka.enqueue(1);
	MojaKolejka.enqueue(2);
	MojaKolejka.enqueue(3);

	cout<< MojaKolejka.dequeue()<<endl;
	cout << MojaKolejka.dequeue() << endl;
	cout << MojaKolejka.dequeue() << endl;
	cout << MojaKolejka.dequeue() << endl;

	MojaKolejka.enqueue(4);
	cout << MojaKolejka.dequeue() << endl;
	cout << MojaKolejka.dequeue() << endl;


	system("pause");
	return 0;
}