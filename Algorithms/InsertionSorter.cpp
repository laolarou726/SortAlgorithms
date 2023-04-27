//
// Created by luoli on 2023/4/27.
//
#include "InsertionSorter.h"

void SortAlgorithms::InsertionSorter::DoSort(std::vector<int> &container) {
    size_t n = container.size();
    long j = 0;

    for (size_t i = 1; i < n; i++) {
        auto key = container[i];
        j = i - 1;

        bool compareResult = this->comparator->Compare(container[j], key);

        while (j >= 0 && compareResult) {
            container[j + 1] = container[j];
            j = j - 1;
        }
        container[j + 1] = key;
    }
}
