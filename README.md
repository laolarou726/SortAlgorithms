# SortAlgorithms [![CMake](https://github.com/laolarou726/SortAlgorithms/actions/workflows/cmake.yml/badge.svg)](https://github.com/laolarou726/SortAlgorithms/actions/workflows/cmake.yml)

A collection of common sorting algorithms, with template programming to support different data types.

## Supporting Algorithms

|         Name        |
|:-------------------:|
|     Bubble Sort     |
|    Insertion Sort   |
|      Merge Sort     |
|      Quick Sort     |
|    Selection Sort   |

## How To Use

```c++

std::vector<int> dataSource{ 10, 20, 30, -1, 0, 12, -23, 12 }; // Init the data source
SortAlgorithms::ComparatorBase<int> *comparator = new SortAlgorithms::AscendingComparator<int>(); // Init the comparator, either ascending or descending
SortAlgorithms::SorterBase<std::vector<int>> *sorter = new SortAlgorithms::BubbleSorter<std::vector<int>>(comparator); // Init the sorter

sorter->DoSort(dataSource); // Sort the data

```

See `main.cpp` for more examples.

## How to add a new Sorter or Comparator

### For Sorter

```c++

template<typename TContainer> // Add a template argument
class NewSorter : public SorterBase<TContainer> { // Extends the class from SorterBase<TContainer>
public:
  explicit NewSorter(ComparatorBase<typename TContainer::value_type>* comparator)  : SorterBase<TContainer>(comparator){}
  void DoSort(TContainer& container) override{
    // ...
    // Your impl for the sorting algorithm
    // ...
  }
}

```

### For Comparator

```c++

template<typename TComp> // Add a template argument
class AscendingComparator : public ComparatorBase<TComp>{ // Extends the class from ComparatorBase<TComp>
public:
  bool Compare(const TComp &comp1, const TComp &comp2) override{
    // ...
    // Your impl for the sorting algorithm
    // ...
  }

  std::ostream &operator<<(std::ostream &out) override{
    return out << "New Comparator";
  }
};

```
