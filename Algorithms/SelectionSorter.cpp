//
// Created by luoli on 2023/4/27.
//
#include "SelectionSorter.h"

void SortAlgorithms::SelectionSorter::DoSort(std::vector<int> &container) {
    size_t n = container.size();

    for (size_t i = 0; i < n - 1; i++) {
        size_t index = i;

        for (size_t j = i+1; j < n; j++) {
            bool compareResult = this->comparator->Compare(container[index], container[j]);

            if (compareResult)
                index = j;
        }

        std::swap(container[index], container[i]);
    }
}

