//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_BUBBLESORTER_H
#define SORTALGORITHMS_BUBBLESORTER_H

#include "SorterBase.h"

namespace SortAlgorithms {

    template<typename TContainer>
    class BubbleSorter : public SorterBase<TContainer> {
    public:
        explicit BubbleSorter(ComparatorBase<typename TContainer::value_type>* comparator)  : SorterBase<TContainer>(comparator){}
        void DoSort(TContainer& container) override{
            size_t n = container.size();

            // Perform n-1 iterations
            for (size_t i = 0; i < n - 1; i++) {
                bool swapped = false;

                // Perform (n-i-1) comparisons and swap elements if needed
                for (size_t j = 0; j < n - i - 1; j++) {
                    bool compareResult = false;
                    [[clang::noinline]](compareResult = this->comparator->Compare(container[j], container[j+1]));

                    if (compareResult) {
                        std::swap(container[j], container[j+1]);
                        swapped = true;
                    }
                }

                // If no swaps were performed, the array is already sorted
                if (!swapped) {
                    break;
                }
            }
        }
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_BUBBLESORTER_H
