//
// Created by himan on 18/02/2024.
//

#ifndef AUTOKRAKEN_COMMANDPARSER_HPP
#define AUTOKRAKEN_COMMANDPARSER_HPP

#include<iostream>
namespace ak
{
    class CommandParser
    {
    public:
        bool Parse(const std::string& str);
    };
}

#endif //AUTOKRAKEN_COMMANDPARSER_HPP
