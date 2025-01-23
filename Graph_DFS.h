#pragma once

#include <map>
#include <vector>
#include <algorithm>
#include <iostream>

using Graph = map<char, vector<char>>;

void depthFirstPrint(Graph& graph, char source)
{
    std::vector<char> stack = {source};
    std::vector<char> visited = {};

    while (stack.size())
    {
        char current = stack.back();
        stack.pop_back();

        if (find(visited.begin(), visited.end(), current) == visited.end())
        {
            visited.push_back(current);
            std::cout << current << endl;

            for (char neighbor : graph[current])
            {
                stack.push_back(neighbor);
            }
        }
    }
}

void depthFirstRecursivePrint(Graph& graph, char source)
{
    std::cout << source << endl;

    for (char neighbor : graph[source])
    {
        depthFirstRecursivePrint(graph, neighbor);
    }
}


void breadhFirstPrint(Graph& graph, char source)
{
    std::vector<char> queue = {source};
    std::vector<char> visited = {};

    while (queue.size())
    {
        char current = queue.front();
        queue.erase(queue.begin());

        if (find(visited.begin(), visited.end(), current) == visited.end())
        {
            for (char neighbor : graph[current])
            {
                queue.push_back(neighbor);
            }
            
            std::cout << current << endl;
            visited.push_back(current);
        }
    }
}
    

