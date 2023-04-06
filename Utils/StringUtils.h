//
// Created by luoli on 2023/4/6.
//

#ifndef SORTALGORITHMS_STRINGUTILS_H
#define SORTALGORITHMS_STRINGUTILS_H

#include <string>
#include <vector>
#include <cstring>

namespace SortAlgorithms {

    class StringUtils {
    public:
        static void Tokenize(std::string const &str, const char* delim,
                             std::vector<std::string> &out)
        {
            char *token = std::strtok(const_cast<char*>(str.c_str()), delim);
            while (token != nullptr)
            {
                out.emplace_back(token);
                token = std::strtok(nullptr, delim);
            }
        }
    };

} // SortAlgorithms

#endif //SORTALGORITHMS_STRINGUTILS_H
