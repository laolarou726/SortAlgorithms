//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_ASCENDINGCOMPARATOR_H
#define SORTALGORITHMS_ASCENDINGCOMPARATOR_H

#include "ComparatorBase.h"

namespace SortAlgorithms {

    template<typename TComp>
    class AscendingComparator : public ComparatorBase<TComp>{
    public:
        bool Compare(const TComp &comp1, const TComp &comp2) override{
            return comp1 > comp2;
        }

        std::ostream &operator<<(std::ostream &out) override{
            return out << "Ascending Order Comparator";
        }
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_ASCENDINGCOMPARATOR_H
