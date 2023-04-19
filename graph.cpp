#include <iostream>
#include <vector>
#include <limits>

using namespace std;

class Node
{
public:
    struct Edge
    {
        int source, dest;
        int weight;
    };

    void addEdge(int source, int dest, int weight)
    {
        Edge edge = {source, dest, weight};
        edges.push_back(edge);
        numVertices++;
    }
    vector<Edge> edges;
    vector<int> distances;
    int numVertices = 0;
};

void dijkstra(Node graph, int start)
{
    const int inf = numeric_limits<int>::max();

    graph.distances.assign(graph.numVertices, inf);
    graph.distances[start] = 0;

    for (int i = 0; i < graph.numVertices - 1; i++)
    {
        for (const auto &edge : graph.edges)
        {
            int u = edge.source;
            int v = edge.dest;
            int w = edge.weight;
            if (graph.distances[u] != inf && graph.distances[u] + w < graph.distances[v])
            {
                graph.distances[v] = graph.distances[u] + w;
            }
        }
    }

    for (const auto &edge : graph.edges)
    {
        int u = edge.source;
        int v = edge.dest;
        int w = edge.weight;
        if (graph.distances[u] != inf && graph.distances[u] + w < graph.distances[v])
        {
            cout << "Graph contains a negative-weight cycle" << endl;
            return;
        }
    }

    for (int i = 0; i < graph.numVertices; i++)
    {
        cout << "Shortest distance from vertex " << start << " to vertex " << i << " is " << graph.distances[i] << endl;
    }
}

int main()
{
    Node g;

    g.addEdge(0, 1, 2);
    g.addEdge(1, 2, 4);
    g.addEdge(2, 3, 1);
    g.addEdge(3, 0, -5);
    g.addEdge(2, 4, 3);
    int source = 0;
    dijkstra(g, source);

    return 0;
}