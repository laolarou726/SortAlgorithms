//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_ASCENDINGCOMPARATOR_H
#define SORTALGORITHMS_ASCENDINGCOMPARATOR_H

#include "ComparatorBase.h"

namespace SortAlgorithms {

    class AscendingComparator : public ComparatorBase{
    public:
        [[clang::noinline]]
        bool Compare(int &comp1, int &comp2) override;

        std::ostream &operator<<(std::ostream &out) override;
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_ASCENDINGCOMPARATOR_H
