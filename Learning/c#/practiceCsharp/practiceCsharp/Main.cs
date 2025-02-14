using System;
using System.Collections.Generic;
using System.IO;

class Program {
    
    static void ain() {
        Dictionary<int, List<int>> graph = new Dictionary<int, List<int>>();
        graph.Add(0, new List<int> { 1, 2 });
        graph.Add(1, new List<int> { 0, 3, 4 });
        graph.Add(2, new List<int> { 0, 5 });
        graph.Add(3, new List<int> { 1 });
        graph.Add(4, new List<int> { 1 });

        Algorithms algo = new Algorithms();
        algo.bfs(graph, 3);
    }
}