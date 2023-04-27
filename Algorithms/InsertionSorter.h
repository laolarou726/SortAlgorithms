//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_INSERTIONSORTER_H
#define SORTALGORITHMS_INSERTIONSORTER_H

#include "SorterBase.h"

namespace SortAlgorithms {

    template<typename TContainer>
    class InsertionSorter : public SorterBase<TContainer> {
    public:
        explicit InsertionSorter(ComparatorBase<typename TContainer::value_type>* comparator)  : SorterBase<TContainer>(comparator){}
        void DoSort(TContainer& container) override {
            size_t n = container.size();
            long j = 0;

            for (size_t i = 1; i < n; i++) {
                auto key = container[i];
                j = i - 1;

                [[clang::noinline]] bool compareResult = this->comparator->Compare(container[j], key);

                while (j >= 0 && compareResult) {
                    container[j + 1] = container[j];
                    j = j - 1;
                }
                container[j + 1] = key;
            }
        }
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_INSERTIONSORTER_H
