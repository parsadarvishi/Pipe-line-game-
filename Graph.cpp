#include "Graph.h"

bool Graph::is_there_way(int x , int y)
{

}
void Graph::creat_graph() // برای قطع کردن تمامی یال ها از راس ها در ماتریس مجاورت
{
    for(auto item : graph)
    {
        for (auto item2 : item)
        {
            item2 = false;
        }
    }
}
