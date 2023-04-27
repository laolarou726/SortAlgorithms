//
// Created by luoli on 2023/4/27.
//
#include "DescendingComparator.h"

bool SortAlgorithms::DescendingComparator::Compare(int &comp1, int &comp2) {
    return comp1 < comp2;
}

std::ostream &SortAlgorithms::DescendingComparator::operator<<(std::ostream &out) {
    return out << "Descending Order Comparator";
}

