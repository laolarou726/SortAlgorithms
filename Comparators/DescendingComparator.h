//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_DESCENDINGCOMPARATOR_H
#define SORTALGORITHMS_DESCENDINGCOMPARATOR_H

#include "ComparatorBase.h"

namespace SortAlgorithms {

    template<typename TComp>
    class DescendingComparator : public ComparatorBase<TComp>{
    public:
        bool Compare(const TComp &comp1, const TComp &comp2) override{
            return comp1 < comp2;
        }

        std::ostream &operator<<(std::ostream &out) override{
            return out << "Descending Order Comparator";
        }
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_DESCENDINGCOMPARATOR_H
