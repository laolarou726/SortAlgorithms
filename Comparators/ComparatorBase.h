//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_COMPARATORBASE_H
#define SORTALGORITHMS_COMPARATORBASE_H

#include <iostream>

namespace SortAlgorithms {

    class ComparatorBase {
    public:
        virtual bool Compare(int &comp1, int &comp2) = 0;
        virtual std::ostream &operator<<(std::ostream &out);
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_COMPARATORBASE_H
