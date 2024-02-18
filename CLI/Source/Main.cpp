//
// Created by himan on 18/02/2024.
//

#include"CommandParser.hpp"

int main()
{
    ak::CommandParser cp;

    std::cout << (cp.Parse("jesus") ? "true" : "false");
    return 0;
}