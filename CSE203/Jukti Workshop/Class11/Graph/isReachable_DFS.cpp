#include<iostream>
using namespace std;

const int N = 9;

// Using Depth First Search
bool isReachable(bool g[N][N], bool v[], int src, int dest)
{
    cout << "src = " << src << " dest = " << dest << endl;
    if(src == dest)
        return true;
    v[src] = true;

    for(int i = 0 ;i < N; i++)
    {
        if(g[src][i] == true && v[i] == false)
        {
            return isReachable(g,v,i, dest);
        }
    }
    return false;

}

int main()
{
    bool graph[N][N] = {{0,1,0,0,0,0,0,1,1},
                        {0,0,0,0,0,0,0,0,1},
                        {0,0,0,0,1,0,0,0,1},
                        {0,0,1,0,0,0,0,0,0},
                        {0,0,1,0,0,0,0,0,0},
                        {0,0,0,1,1,0,0,0,1},
                        {0,0,0,0,0,1,0,0,0},
                        {0,0,0,0,0,1,1,0,0},
                        {0,0,0,1,0,0,0,0,0}
                        };

    bool visited[N] = {0};
    int src, dest;
    cout << "Enter the source node:";
    cin >> src;
    cout << "Enter the destination node:";
    cin >> dest;
    if(isReachable(graph, visited, src, dest) == true)
        cout  << dest << " is reachable from " << src << endl;
    else
        cout  << dest << " is not reachable from " << src << endl;
    cout << endl;

}
