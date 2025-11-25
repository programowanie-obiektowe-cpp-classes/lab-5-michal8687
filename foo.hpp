#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> result;
    result.reserve(people.size());
    for (auto& h : people)
    {
        h.birthday();
        result.push_back(h.isMonster() ? 'n' : 'y');
    }
    std::reverse(result.begin(), result.end());
    return result;
}
