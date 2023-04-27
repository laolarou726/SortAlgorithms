//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_BUBBLESORTER_H
#define SORTALGORITHMS_BUBBLESORTER_H

#include "SorterBase.h"

namespace SortAlgorithms {
    class BubbleSorter : public SorterBase {
    public:
        explicit BubbleSorter(ComparatorBase* comparator)  : SorterBase(comparator){}
        void DoSort(std::vector<int>& container) override;
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_BUBBLESORTER_H
