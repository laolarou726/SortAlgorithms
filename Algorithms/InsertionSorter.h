//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_INSERTIONSORTER_H
#define SORTALGORITHMS_INSERTIONSORTER_H

#include "SorterBase.h"

namespace SortAlgorithms {
    class InsertionSorter : public SorterBase {
    public:
        explicit InsertionSorter(ComparatorBase* comparator)  : SorterBase(comparator){}
        ~InsertionSorter(){}
        void DoSort(std::vector<int>& container) override;
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_INSERTIONSORTER_H
