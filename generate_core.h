#ifndef GENERATE_CORE_H_INCLUDED
#define GENERATE_CORE_H_INCLUDED
#include "Graph.h"
#include <vector>
class Generate
{
public:
    void create_game_graph ();
    void Design_game_solution();
private:
    Graph game;
    std::vector <std::vector<int> > Around_vertex ; // an 2d array that we save our vertexes , near vertexes to use them to generate a way
};

#endif // GENERATE_CORE_H_INCLUDED
