//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_SORTERBASE_H
#define SORTALGORITHMS_SORTERBASE_H

#include <vector>
#include "../Comparators/ComparatorBase.h"

namespace SortAlgorithms {
    class SorterBase {
    protected:
        ComparatorBase* comparator{};
    public:
        virtual void DoSort(std::vector<int>& container) = 0;
        explicit SorterBase(ComparatorBase* comparator);
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_SORTERBASE_H
