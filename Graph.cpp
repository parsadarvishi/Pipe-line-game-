#include "Graph.h"
#include <vector>
#include <iostream>
using namespace std;

bool Graph::way_to_end(int first)
{
    int curser = 0 ;
    vector <bool> checked (25);
    for (int i = 0 ; i < 25 ; i++ )
       checked[0]=false;
    vector<int> queue  ;
    checked[first]=true;
    queue.push_back(first);
    while (queue.at(0) !=-1)
    {
        first = queue.front();
        queue.at(0)=-1;

        for (int i =0 ; i < 25; i++)
        {
            if(i == 24 )
                return true;

            if(!checked.at(i))
            {
                checked.at(i) = true ;
                queue.push_back(i);
            }
        }
    }
}
void Graph::create_graph() // برای قطع کردن تمامی یال ها از راس ها در ماتریس مجاورت
{
    for(int i = 0 ; i < 25 ; i++)
    {
        for (int j = 0 ; j < 25 ; j++)
        {
            graph[i][j] = false;
        }
    }
}
void Graph::add_path(int first , int next)  // اضافه کردن یال بین دو راس در ماتریس
{
    graph[first][next] = true;
    graph[next][first] = true;
}
bool Graph::is_way(int first , int next ) // چک می کند ببیند آیا بین دو راس یالی وجود دارد یا نه
{
    if(graph[first][next] == true || graph[next][first] == true )
        return true ;
    else
        return false;
}
void Graph::remove_path(int first , int next ) //  یال بین دو راس را حدف می کند
{
    graph[first][next] = false;
    graph[next][first] = false;
}

vector <int> Graph::Around_pusher (int first)
{
    vector <int> temp;
        for ( int next = 0 ; next < 25 ; next++)
        {
            if(this->is_way(first , next))
                temp.push_back(next);
        }
    return temp;

}

