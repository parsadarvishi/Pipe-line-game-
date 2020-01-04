#include "Graph.h"
#include <vector>
bool Graph::is_there_way(int first)
{
    vector <bool> checked (25);
    for (auto item : checked )
        item = false;
    list<int> queue  ;
    checked[first]=true;
    queue.push_back(first);
    list <int> :: iterator i;
    while (!queue.empty())
    {
        first = queue.front();
        first.pop_front();

        for ( i = Around(first).begin() ; i< Around(first).end() ; i++)
        {
            if(*i == 24 )
                return turn;

            if(!cheched[*i])
            {
                visited[*i] = true ;
                queue.push_back(*i);
            }
        }
    }
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
void Graph::add_path(int first , int next)  // اضافه کردن یال بین دو راس در ماتریس
{
    graph[first][next] = true;
    graph[next][firts] = true;
}
void Graph::is_way(int first , int next ) // چک می کند ببیند آیا بین دو راس یالی وجود دارد یا نه
{
    if(graph[first][next] == true || graph[next][first] == true )
        return true ;
    else
        return false;
}
void Graph::remove_path(int first , int next ) //  یال بین دو راس را حدف می کند
{
    graph[first][next] = false;
    graph[next][firts] = false;
}
list <int> Graph::Around (int first)
{
    list <int > around;
    for (int i =0 ; i < 25 ; i++)
    {
        if (graph[first][i] || graph[i][first])
        {
            around.push_back(i);
        }
    }
        return around;
}
