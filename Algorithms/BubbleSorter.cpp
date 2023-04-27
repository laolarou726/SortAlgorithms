//
// Created by luoli on 2023/4/27.
//
#include "BubbleSorter.h"

void SortAlgorithms::BubbleSorter::DoSort(std::vector<int> &container) {
    size_t n = container.size();

    // Perform n-1 iterations
    for (size_t i = 0; i < n - 1; i++) {
        bool swapped = false;

        // Perform (n-i-1) comparisons and swap elements if needed
        for (size_t j = 0; j < n - i - 1; j++) {
            bool compareResult = compareResult = this->comparator->Compare(container[j], container[j+1]);

            if (compareResult) {
                std::swap(container[j], container[j+1]);
                swapped = true;
            }
        }

        // If no swaps were performed, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

