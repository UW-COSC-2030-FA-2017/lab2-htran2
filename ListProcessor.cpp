//Huy Tran
// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;
	if (cows.getSize() == 0) {
		cout << "Testing cow's size = 0: True." << endl << endl;
	}
	cout << "Sum: " << cows.sum() << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);

	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsLast(9.99);
	cout << "cows list  :  " << cows << endl << endl;
	if (cows.getSize() == 3) {
		cout << "Testing cow's size == 3: True." << endl << endl;
	}
	cout << "Sum: " << cows.sum() << endl;


	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "End of code" << endl;

	return 0;
}
