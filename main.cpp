#include <queue>
#include <iostream>
#include "ArrayQeueu.h"
using namespace std;

int main() {
	ArrayQeueu<int> MojaKolejka;
	MojaKolejka.enqueue(1);
	cout << MojaKolejka.dequeue();
	system("pause");
	return 0;
}