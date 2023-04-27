//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_SELECTIONSORTER_H
#define SORTALGORITHMS_SELECTIONSORTER_H

#include "SorterBase.h"

namespace SortAlgorithms {

    template<typename TContainer>
    class SelectionSorter : public SorterBase<TContainer> {
    public:
        explicit SelectionSorter(ComparatorBase<typename TContainer::value_type>* comparator)  : SorterBase<TContainer>(comparator){}
        void DoSort(TContainer& container) override {
            size_t n = container.size();

            for (size_t i = 0; i < n - 1; i++) {
                size_t index = i;

                for (size_t j = i+1; j < n; j++) {
                    bool compareResult = this->comparator->Compare(container[index], container[j]);

                    if (compareResult)
                        index = j;
                }

                std::swap(container[index], container[i]);
            }
        }
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_SELECTIONSORTER_H
