//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_MERGESORTER_H
#define SORTALGORITHMS_MERGESORTER_H

#include "SorterBase.h"

namespace SortAlgorithms {
    class MergeSorter : public SorterBase {
    private:
        void merge(std::vector<int>& container, size_t l, size_t m, size_t r);

        void mergeSort(std::vector<int>& container, size_t l, size_t r);
    public:
        explicit MergeSorter(ComparatorBase* comparator)  : SorterBase(comparator){}
        ~MergeSorter(){}
        void DoSort(std::vector<int>& container) override;
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_MERGESORTER_H
