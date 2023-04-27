//
// Created by luoli on 2023/4/27.
//
#include "AscendingComparator.h"

bool SortAlgorithms::AscendingComparator::Compare(int &comp1, int &comp2) {
    return comp1 > comp2;
}

std::ostream &SortAlgorithms::AscendingComparator::operator<<(std::ostream &out) {
    return out << "Ascending Order Comparator";
}

