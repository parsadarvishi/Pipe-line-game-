#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <array>
class Graph
{
public :
    void creat_graph ();
    void add_path(int , int )
    array <array <bool , 25> , 25> graph  ; // ماتریس مجاورت یک گراف 5*5 برای پیدا کردن یک راه از شروع به پایان
    void new_vertex (); // برای اضافه کردن یک راس به ماتریس مجاورت ما
    bool is_there_way (int  , int );
private:


};



#endif // GRAPH_H_INCLUDED
