//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_SELECTIONSORTER_H
#define SORTALGORITHMS_SELECTIONSORTER_H

#include "SorterBase.h"

namespace SortAlgorithms {
    class SelectionSorter : public SorterBase {
    public:
        explicit SelectionSorter(ComparatorBase* comparator)  : SorterBase(comparator){}
        ~SelectionSorter(){}
        void DoSort(std::vector<int>& container) override;
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_SELECTIONSORTER_H
