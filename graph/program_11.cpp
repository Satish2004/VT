#include <iostream>
#include <vector>
using namespace std;

class Graph
{
    vector<vector<int>> adj_matrix;

public:
    Graph(int n)
    {
        adj_matrix = vector<vector<int>>(n, vector<int>(n, 0));
    }
    void add_edge(int u, int v)
    {
        adj_matrix[u][v] = 1;
        adj_matrix[v][u] = 0;
    }
    void print()
    {
        for (const auto &row : adj_matrix)
        {
            for (int val : row)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g(4);
    g.add_edge(0, 1);
    g.add_edge(0, 3);
    g.add_edge(0, 2);
    g.add_edge(1, 2);
    g.add_edge(3, 2);
    g.print();
    

    return 0;
}