//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_COMPARATORBASE_H
#define SORTALGORITHMS_COMPARATORBASE_H

#include <iostream>

namespace SortAlgorithms {

    template<typename TComp>
    class ComparatorBase {
    public:
        [[clang::noinline]]
        virtual bool Compare(const TComp &comp1, const TComp &comp2) = 0;
        virtual std::ostream &operator<<(std::ostream &out);
    };

    template<typename TComp>
    std::ostream &ComparatorBase<TComp>::operator<<(std::ostream &out) {
        return out << "Comparator Base Class";
    }

} // SortAlgorithms

#endif //SORTALGORITHMS_COMPARATORBASE_H
