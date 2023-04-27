//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_QUICKSORTER_H
#define SORTALGORITHMS_QUICKSORTER_H

#include "SorterBase.h"

namespace SortAlgorithms {

    template<typename TContainer>
    class QuickSorter : public SorterBase<TContainer> {
    private:
        void quickSort(TContainer& container, size_t left, size_t right) {
            size_t i = left, j = right;
            auto pivot = container[(left + right) / 2];

            /* partition */
            while (i <= j) {
                while (this->comparator->Compare(pivot, container[i]))
                    i++;
                while (this->comparator->Compare(container[j], pivot))
                    j--;

                if (i <= j) {
                    std::swap(container[j], container[i]);
                    i++;
                    j--;
                }
            };

            /* recursion */
            if (left < j)
                quickSort(container, left, j);
            if (i < right)
                quickSort(container, i, right);
        }
    public:
        explicit QuickSorter(ComparatorBase<typename TContainer::value_type>* comparator)  : SorterBase<TContainer>(comparator){}
        void DoSort(TContainer& container) override {
            size_t n = container.size();
            this->quickSort(container, 0, n - 1);
        }
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_QUICKSORTER_H
