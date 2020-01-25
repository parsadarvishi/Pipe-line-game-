#include "Graph.h"
#include "generate_core.h"
#include <iostream>
#include <vector>
using namespace std;
void Generate::create_game_graph()
{
    game.create_graph();
    for(int i=0 ; i<25 ; i++)
    {
        if(!((i+1)%5 ==0))
        {
            game.add_path(i,i+1);
        }
    }
    for(int i = 0 ; i<25 ; i++)
    {
        if((i+5 )<= 25 )
        {
            game.add_path(i,i+5);
        }
    }
   /* for (int i =0 ; i < 25 ; i++)
    {
        cout << i << "===>";
    game.Around_pusher(i);
    }*/
}
void Generate::Design_game_solution()
{
    this->create_game_graph();
    int current=2;

    while ( current != 24)
    {
       /*  vector <int> possible_keepers;
         list <int> temperary = game.Around(current);
         for ( int i = 1 ; i < temperary.size() ; i++ )
         {
             game.remove_path(current , i);

             if(game.way_to_end(i) == true)
             {
                possible_keepers.push_back(i);
             }

         }
         cout <<possible_keepers.size()<<endl;
         current = 24;*/
    }
}
