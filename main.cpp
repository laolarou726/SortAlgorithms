#include <iostream>
#include <vector>
#include <array>
#include "Comparators/AscendingComparator.h"
#include "Comparators/DescendingComparator.h"
#include "Algorithms/BubbleSorter.h"
#include "Algorithms/InsertionSorter.h"
#include "Algorithms/MergeSorter.h"
#include "Algorithms/SelectionSorter.h"
#include "Algorithms/QuickSorter.h"
#include "Utils/RandomUtil.h"
#include "Utils/StringUtils.h"

int main() {

    // Data Source

    std::cout << "Choose your data source\n"
                << "\t - (1) Random (Any number between -100 ~ 100)\n"
                << "\t - (2) By Input\n"
                << ": ";

    int dataSourceChoice = 1;
    std::cin >> dataSourceChoice;

    if(dataSourceChoice != 1 && dataSourceChoice != 2)
        return 0;

    std::vector<int> dataSource;
    if(dataSourceChoice == 1){
        size_t count = 100;

        std::cout << "Please input the test data size: ";
        std::cin >> count;

        dataSource = SortAlgorithms::RandomUtil::GetRandomIntVector(count, -100, 100);
    }
    else{
        std::string inputStr;

        std::cout << "Please input the test data (separate by comma): ";
        std::cin >> inputStr;

        std::vector<std::string> rawInputs;
        SortAlgorithms::StringUtils::Tokenize(inputStr, ",", rawInputs);

        dataSource.clear();
        for(const auto& str : rawInputs){
            dataSource.emplace_back(std::stoi(str));
        }
    }

    // Comparator

    SortAlgorithms::ComparatorBase<int> *comparator;

    std::cout << "Choose your sorting order\n"
              << "\t - (1) Ascending\n"
              << "\t - (2) Descending\n"
              << ": ";

    int comparatorChoice = 1;
    std::cin >> comparatorChoice;

    if(comparatorChoice != 1 && comparatorChoice != 2)
        return 0;

    if(comparatorChoice == 1)
        comparator = new SortAlgorithms::AscendingComparator<int>();
    else
        comparator = new SortAlgorithms::DescendingComparator<int>();

    // Algorithm

    SortAlgorithms::SorterBase<std::vector<int>> *sorter;

    std::cout << "Choose your sorting algorithm\n"
              << "\t - (1) Bubble Sort\n"
              << "\t - (2) Insertion Sort\n"
              << "\t - (3) Merge Sort\n"
              << "\t - (4) Quick Sort\n"
              << "\t - (5) Selection Sort\n"
              << ": ";

    int sorterChoice = 1;
    std::cin >> comparatorChoice;

    if(sorterChoice < 1 || sorterChoice > 5)
        return 0;

    switch (sorterChoice) {
        case 1:
            sorter = new SortAlgorithms::BubbleSorter<std::vector<int>>(comparator);
            break;
        case 2:
            sorter = new SortAlgorithms::InsertionSorter<std::vector<int>>(comparator);
            break;
        case 3:
            sorter = new SortAlgorithms::MergeSorter<std::vector<int>>(comparator);
            break;
        case 4:
            sorter = new SortAlgorithms::QuickSorter<std::vector<int>>(comparator);
            break;
        case 5:
            sorter = new SortAlgorithms::SelectionSorter<std::vector<int>>(comparator);
            break;
    }

    std::cout << "Before sorting: ";
    for (int elem : dataSource) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    sorter->DoSort(dataSource);

    std::cout << "After sorting: ";
    for (int elem : dataSource) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
