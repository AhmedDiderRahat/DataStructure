#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>

using namespace std;
#define SIZE 100

vector<int>adjList[100];
bool color[SIZE];
int parent[SIZE];

void printPath(int s, int d)
{
    while(true)
    {
        cout<<d<< " ";

        d = parent[d];

        if(d == -1)
            break;
    }
}

void BFS(int s, int d)
{
    int u, v;
    queue<int>Q;
    Q.push(s);
    color[s] = true;
    parent[s] = -1;

    while(!Q.empty())
    {
        u = Q.front();
        Q.pop();

        for(int i=0; i<adjList[u].size(); i++)
        {
            v = adjList[u][i];
            if(color[v] == false)
            {
                Q.push(v);
                color[v] = true;
                parent[v] = u;
            }
        }
    }
}

int main()
{
    int vertex, edge, s, d;
    cout<<"Enter number of vertex and edge: ";
    cin>>vertex>>edge;

    cout<<"\nEnter the edges: \n";
    for(int i=0; i<edge; i++)
    {
        cin>>s>>d;
        adjList[s].push_back(d);
        adjList[d].push_back(s);
    }

    cout<<"Enter source and destination: ";
    cin>>s>>d;
    BFS(s, d);

//    for(int i=0; i<=vertex; i++)
//        cout<<parent[i]<< " ";
    printPath(s, d);

//    for(int i=1; i<=vertex; i++){
//        cout<<i<< " : ";
//        for(int j=0; j<adjList[i].size(); j++)
//            cout<<adjList[i][j]<<" ";
//        cout<<endl;
//    }
}

/*
6 9
1 2
1 3
1 4
2 3
2 4
2 5
3 5
4 6
5 6
Ahmed Dider Rahat
*/
