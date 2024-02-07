#include "sortSelection.h"


void sortSelection(int* arr, const int size, bool(*fcnPtr)(int, int)){

	for (int startIndex = 0; startIndex < size; startIndex++) {

		int bestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < size; currentIndex++) {

			if (fcnPtr(arr[bestIndex], arr[currentIndex])) {
				bestIndex = currentIndex;
			}
		}

		std::swap(arr[startIndex], arr[bestIndex]);
	}
}
