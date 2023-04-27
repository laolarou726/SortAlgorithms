//
// Created by luoli on 2023/4/27.
//
#include "QuickSorter.h"

void SortAlgorithms::QuickSorter::quickSort(std::vector<int> &container, size_t left, size_t right) {
    size_t i = left, j = right;
    auto pivot = container[(left + right) / 2];

    /* partition */
    while (i <= j) {
        while (this->comparator->Compare(pivot, container[i]))
            i++;
        while (this->comparator->Compare(container[j], pivot))
            j--;

        if (i <= j) {
            std::swap(container[j], container[i]);
            i++;
            j--;
        }
    };

    /* recursion */
    if (left < j)
        quickSort(container, left, j);
    if (i < right)
        quickSort(container, i, right);
}

void SortAlgorithms::QuickSorter::DoSort(std::vector<int> &container) {
    size_t n = container.size();
    this->quickSort(container, 0, n - 1);
}

