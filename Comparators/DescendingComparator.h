//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_DESCENDINGCOMPARATOR_H
#define SORTALGORITHMS_DESCENDINGCOMPARATOR_H

#include "ComparatorBase.h"

namespace SortAlgorithms {

    class DescendingComparator : public ComparatorBase{
    public:
        bool Compare(int &comp1, int &comp2) override;

        std::ostream &operator<<(std::ostream &out) override;

        ~DescendingComparator();
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_DESCENDINGCOMPARATOR_H
