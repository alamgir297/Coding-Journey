using System;
using System.Collections.Generic;
using System.IO;

class Algorithms {
    List<int> primes=new List<int>();
    int[] isPrime = new int[100000];

    public void siev() {
        primes.Add(2);
        int n = isPrime.Length;
        for (int i=3; i<=Math.Sqrt(n); i+=2) {
            if(isPrime[i] == 0) {
                primes.Add(i);
                if (i > n / i) continue;
                for (int j=i*i; j<=n; j += (2 * i)) {
                    isPrime[j] = 1;
                }
            }
        }
    }

    public void printAr(List<int> primes) {
        for(int i=0; i<primes.Count; i++) {
            Console.WriteLine(primes[i]);
        }
    }
    public void printAr2d(int[,] ar) {
        for (int y = 1; y <= 5; y++) {
            for (int x = 1; x <= 5; x++) {
                Console.Write(ar[y,x]);
            }
            Console.WriteLine();
        }
    }
    Queue<int> q = new Queue<int>();
    bool[] visited = new bool[10000];
    public void bfs(Dictionary<int, List<int>> graph, int start) {
        q.Enqueue(start);
        while (q.Count > 0) {
            int node = q.Dequeue();
            Console.WriteLine(node);
            visited[node] = true;
            foreach (int neighbor in graph[node]) {
                if (visited[neighbor] == false) {
                    q.Enqueue(neighbor);
                    visited[neighbor] = true;
                }
            }
            Console.WriteLine("vis: " + node);
        }
    }
}