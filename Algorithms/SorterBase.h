//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_SORTERBASE_H
#define SORTALGORITHMS_SORTERBASE_H

#include <vector>
#include "../Comparators/ComparatorBase.h"

namespace SortAlgorithms {

    template<typename TContainer>
    class SorterBase {
    protected:
        ComparatorBase<typename TContainer::value_type>* comparator;
        explicit SorterBase(ComparatorBase<typename TContainer::value_type>* comparator){
            this->comparator = comparator;
        }
    public:
        virtual void DoSort(TContainer& container) = 0;
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_SORTERBASE_H
