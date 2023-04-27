cmake_minimum_required(VERSION 3.22)
project(SortAlgorithms)

set(CMAKE_CXX_STANDARD 20)

add_executable(SortAlgorithms main.cpp Comparators/ComparatorBase.h Comparators/ComparatorBase.h Comparators/AscendingComparator.h Comparators/DescendingComparator.h Algorithms/SorterBase.h Algorithms/BubbleSorter.h Algorithms/InsertionSorter.h Algorithms/InsertionSorter.h Algorithms/MergeSorter.h Algorithms/SelectionSorter.h Algorithms/QuickSorter.h Utils/RandomUtil.h Utils/StringUtils.h Utils/StringUtils.h Comparators/ComparatorBase.cpp Comparators/ComparatorBase.cpp Comparators/ComparatorBase.cpp Comparators/DescendingComparator.cpp Comparators/AscendingComparator.cpp Algorithms/SorterBase.cpp Algorithms/SelectionSorter.cpp Algorithms/QuickSorter.cpp Algorithms/MergeSorter.cpp Algorithms/InsertionSorter.cpp Algorithms/BubbleSorter.cpp)
