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
        explicit SorterBase(ComparatorBase* comparator);
    public:
        virtual void DoSort(std::vector<int>& container) = 0;
        ~SorterBase()= default;
        SorterBase() = default;
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_SORTERBASE_H
