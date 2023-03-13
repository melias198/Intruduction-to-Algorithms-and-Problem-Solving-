## 2. DFS
```
In this tutorial, you will learn about depth first search algorithm with examples and pseudocode. Also, you will learn to implement DFS in C, Java, Python, and C++.
Depth first Search or Depth first traversal is a recursive algorithm for searching all the vertices of a graph or tree data structure. Traversal means visiting all the nodes of a graph.
```

### Implementation of DFS traversal on Graph:

**Follow the below method to implement DFS traversal.**
```
1. Start by putting any one of the graph's vertices on top of a stack.
2. Take the top item of the stack and add it to the visited list.
3. Create a list of that vertex's adjacent nodes. Add the ones which aren't in the visited list to the top of the stack.
4. Keep repeating steps 2 and 3 until the stack is empty.
```

**Illustration:**
```
Step1: We use an undirected graph with 5 vertices.
```
![DFS1](https://user-images.githubusercontent.com/119610761/224725620-7cc365d5-10d8-43b3-90dd-46ec51948b00.jpg)


```
Step2: We start from vertex 0, the DFS algorithm starts by putting it in the Visited list and putting all its adjacent vertices in the stack.
```
![DFS2](https://user-images.githubusercontent.com/119610761/224725748-a4e29a66-af94-4f3a-a426-c917acdfda83.jpg)


```
Step3: Next, we visit the element at the top of stack i.e. 1 and go to its adjacent nodes. Since 0 has already been visited, we visit 2 instead.
```
![DFS3](https://user-images.githubusercontent.com/119610761/224725883-2bc965ba-6deb-4d72-a3f4-6f0bd480ab4e.jpg)


```
Step4: Vertex 2 has an unvisited adjacent vertex in 4, so we add that to the top of the stack and visit it.
```
![DFS4](https://user-images.githubusercontent.com/119610761/224725998-f3341978-1859-4d87-aeed-a3a4fe577f93.jpg)


```
Step5: 
```
![DFS5](https://user-images.githubusercontent.com/119610761/224726155-ba9896d8-0aa0-4fac-bd50-24439300c127.jpg)


```
Step6: After we visit the last element 3, it doesn't have any unvisited adjacent nodes, so we have completed the Depth First Traversal of the graph.
```
![DFS6](https://user-images.githubusercontent.com/119610761/224726284-6874a583-7a98-49ad-b05a-697eae3eaaab.jpg)


**Pseudocode:**
```
The pseudocode for DFS is shown below. In the init() function, notice that we run the DFS function on every node. This is because the graph might have two different disconnected parts so to make sure that we cover every vertex, we can also run the DFS algorithm on every node.


DFS(G, u)
    u.visited = true
    for each v ∈ G.Adj[u]
        if v.visited == false
            DFS(G,v)
     
init() {
    For each u ∈ G
        u.visited = false
     For each u ∈ G
       DFS(G, u)
}
```

**Complexity:**
```
Time Complexity: The time complexity of the DFS algorithm is represented in the form of O(V + E), where V is the number of nodes and E is the number of edges.
Space Complexity: The space complexity of the algorithm is O(V).
```

**Difference Between BFS and DFS**
```
Breadth-First Search:
BFS, Breadth-First Search, is a vertex-based technique for finding the shortest path in the graph. It uses a Queue data structure that follows first in first out. In BFS, one vertex is selected at a time when it is visited and marked then its adjacent are visited and stored in the queue. It is slower than DFS. 
Example:
    Input:
        A
       / \
      B   C
     /   / \
    D   E   F

    Output: 
    A, B, C, D, E, F
```



```
Depth First Search:
DFS, Depth First Search, is an edge-based technique. It uses the Stack data structure and performs two stages, first visited vertices are pushed into the stack, and second if there are no vertices then visited vertices are popped. 
Example: 
    Input:
        A
       / \
      B   D
     /   / \
    C   E   F

    Output:
    A, B, C, D, E, F
```


