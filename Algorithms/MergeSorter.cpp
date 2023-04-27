//
// Created by luoli on 2023/4/27.
//
#include "MergeSorter.h"

void SortAlgorithms::MergeSorter::merge(std::vector<int> &container, size_t l, size_t m, size_t r) {
    size_t i, j, k;
    size_t n1 = m - l + 1;
    size_t n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = container[l + i];
    for (j = 0; j < n2; j++)
        R[j] = container[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        bool compareResult = this->comparator->Compare(R[j], L[i]);

        if (compareResult) {
            container[k] = L[i];
            i++;
        }
        else {
            container[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there are any */
    while (i < n1) {
        container[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while (j < n2) {
        container[k] = R[j];
        j++;
        k++;
    }
}

void SortAlgorithms::MergeSorter::mergeSort(std::vector<int> &container, size_t l, size_t r) {
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        size_t m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(container, l, m);
        mergeSort(container, m + 1, r);

        merge(container, l, m, r);
    }
}

void SortAlgorithms::MergeSorter::DoSort(std::vector<int> &container) {
    size_t n = container.size();
    this->mergeSort(container, 0, n - 1);
}

