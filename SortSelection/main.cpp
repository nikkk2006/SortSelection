#include <iostream>
#include "sortSelection.h"
#include "ascendingOrder.h"
#include "descendingOrder.h"


int main() {

	const int SIZE = 9;
	int arr[SIZE] = {7, 5, 6, 4, 9, 8, 2, 1, 3};

	char order;
	do {
		std::cout << "Select the sort order(a - ascending, d - descending): _\b";
		std::cin >> order;
	} while (order != 'a' && order != 'd');
	
	switch (order) {
	case 'a': sortSelection(arr, SIZE, ascendingOrder); break;
	case 'd': sortSelection(arr, SIZE, descendingOrder); break;
	}

#pragma region Print arr

	int i = 0;
	while (i < SIZE) {
		std::cout << arr[i++] << ' ';
	}

#pragma endregion

	return 0;
}