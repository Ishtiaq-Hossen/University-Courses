#include<iostream>
#include<queue>
using namespace std;
 
const int N = 9;
 
 
/* ** Creating and printing undirected, unweighted graph **** */ 
void Display (bool g[][N]) 
{
  
    for (int i = 0; i < N; i++)
        
    {
          
          for (int j = 0; j < N; j++)
            
            {
              
            cout << g[i][j] << "\t";
            
            } 
          cout << endl;

    } 
} 
queue<int> q;
int minimum = N;
void printAllPaths (bool g[N][N], bool v[], int path[], int PI, int src,int desti) 
{
  
  v[src] = true;
    
  path[PI] = src;
    
  PI++;
    
  
  if (src == desti)
      
      {
        if(PI < minimum) 
        {
            minimum = PI;
            while(!q.empty())
            {
                q.pop();
            }
            for (int i = 0; i < PI; i++)
            {
              q.push(path[i]);
    
            } 
        }

        cout << endl;
      
      }
    
      else
      
      {
        
        for (int i = 0; i < N; i++)
    
          {
      
              if (g[src][i] == true && v[i] == false)
                    
              printAllPaths (g, v, path, PI, i, desti);
    
          }
      
      }
    
  PI--;
    
  v[src] = false;

}


 
int main () 
{
  
    bool graph[N][N] =
    {
      {0, 1, 0, 0, 0, 0, 0, 1, 1}, 
      {0, 0, 0, 0, 0, 0, 0, 0, 1}, 
      {0, 0, 0, 0, 1, 0, 0, 0, 1}, 
      {0, 0, 1, 0, 0, 0, 0, 0, 0}, 
      {0, 0, 1, 0, 0, 0, 0, 0, 0}, 
      {0, 0, 0, 1, 1, 0, 0, 0, 1}, 
      {0, 0, 0, 0, 0, 1, 0, 0, 0}, 
      {0, 0, 0, 0, 0, 1, 1, 0, 0}, 
      {0, 0, 0, 1, 0, 0, 0, 0, 0} 
    };
  
 
    Display (graph);
  
    cout << endl;
  
    bool visited[N] ={0};

  
    int *path = new int[N];
      
    int PathIndex = 0;
      
    int source, desti;
  
    cout << "Enter the starting node number:";
      
    cin >> source;
      
    cout << "Enter the destination:";
      
    cin >> desti;
      
    printAllPaths (graph, visited, path, PathIndex, source, desti);
    cout << endl;

    while(!q.empty())
    {
        cout << q.front() << "->";
        q.pop();
    }
  
    cout << endl;
    return 0;
 
}
