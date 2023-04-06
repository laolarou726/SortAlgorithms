//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_RANDOMUTIL_H
#define SORTALGORITHMS_RANDOMUTIL_H

#include <vector>
#include <random>
#include <limits.h>

namespace SortAlgorithms {

    class RandomUtil {
    public:
        static std::vector<int> GetRandomIntVector(size_t count, int l = INT_MIN, int r = INT_MAX){
            std::random_device rd;
            std::mt19937 rng(rd());
            std::uniform_int_distribution<int> uni(l, r);

            std::vector<int> result;

            for(size_t i = 0; i < count; i++)
                result.emplace_back(uni(rng));

            return result;
        }
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_RANDOMUTIL_H
