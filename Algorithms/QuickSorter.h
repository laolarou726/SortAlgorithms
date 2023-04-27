//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_QUICKSORTER_H
#define SORTALGORITHMS_QUICKSORTER_H

#include "SorterBase.h"

namespace SortAlgorithms {
    class QuickSorter : public SorterBase {
    private:
        void quickSort(std::vector<int>& container, size_t left, size_t right);
    public:
        explicit QuickSorter(ComparatorBase* comparator)  : SorterBase(comparator){}
        void DoSort(std::vector<int>& container) override;
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_QUICKSORTER_H
