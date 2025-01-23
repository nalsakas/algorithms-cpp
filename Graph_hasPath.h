#pragma once

#include <map>
#include <vector>

using Graph = std::map<char, std::vector<char>>;

bool hasPath(Graph& graph, char src, char dest)
{
    if (src == dest)
        return true;
    
    for (char neighbor : graph[src])
    {
        if (hasPath(graph, neighbor, dest) == true)
            return true;
    }

    return false;
}