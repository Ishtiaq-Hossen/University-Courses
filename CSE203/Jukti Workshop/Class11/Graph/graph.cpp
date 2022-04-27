#include<bits/stdc++.h>
using namespace std;

const int N = 9;
//const int N = 4;

void printAdjacencyMatrix(int g[][N]){
    cout<<"Adjacency Matrix: "<<endl;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
}

void DFS(int g[][N], int src, bool v[]){
    cout<<src<<", ";
    v[src] = true;
    for(int i=0; i<N; i++){
        if(g[src][i]>0 && v[i]==false){
            DFS(g,i,v);
        }
    }
}

void BFS(int g[][N], int src, bool v[]){
    queue<int> toBeVisited;
    toBeVisited.push(src);
    int cur;
    while(!toBeVisited.empty()){
        cur = toBeVisited.front();
        toBeVisited.pop();
        if(v[cur]==false){
            cout<<cur<<", ";
        }
        v[cur] = true;
        for(int i=0; i<N; i++){
            if(g[cur][i]>0 && v[i]==false){
                toBeVisited.push(i);
            }
        }
    }
}

int main(){
    int graph[N][N] = {
        //0 1 2 3 4 5 6 7 8
        {0,1,1,1,1,0,0,0,0},//0
        {1,0,1,0,0,0,0,0,1},//1
        {1,1,0,1,0,0,1,0,0},//2
        {1,0,1,0,1,0,0,0,0},//3
        {1,0,0,1,0,0,0,0,0},//4
        {0,0,0,0,0,0,1,1,0},//5
        {0,0,1,0,0,1,0,1,0},//6
        {0,0,0,0,0,1,1,0,0},//7
        {0,1,0,0,0,0,0,0,0} //8
    };
    /*
    int graph[N][N]={
        {0,1,1,1},
        {1,0,0,1},
        {1,0,0,1},
        {1,1,1,0}
    };*/
    printAdjacencyMatrix(graph);
    cout<<endl;
    int src = 0;
    bool v[N] = {false};
    cout<<"DFS: ";
    DFS(graph, src, v);
    cout<<endl;

    int src1 = 0;
    bool v1[N] = {false};
    cout<<"BFS: ";
    BFS(graph, src1, v1);
    cout<<endl;
}
