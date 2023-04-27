//
// Created by luoli on 2023/4/27.
//
#include "SorterBase.h"

SortAlgorithms::SorterBase::SorterBase(ComparatorBase *comparator) {
    this->comparator = comparator;
}

