#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <array>
#include <vector>
class Graph
{
public :
    bool is_way(int , int );
    void remove_path(int  , int  );
    void create_graph ();
    void add_path(int , int );
    std::array <std::array <bool , 25> , 25> graph  ; // ماتریس مجاورت یک گراف 5*5 برای پیدا کردن یک راه از شروع به پایان
    bool way_to_end (int);
    std::vector <std::vector<int> > Around_vertex ;
    void Around_pusher (int );
private:


};



#endif // GRAPH_H_INCLUDED
