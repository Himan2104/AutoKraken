//
// Created by himan on 18/02/2024.
//

#include "CommandParser.hpp"
#include "Basics.hpp"
namespace ak
{
    bool CommandParser::Parse(const std::string& str)
    {
        Basics b;

        return b.GetSomeInts() > 5;
    }
}