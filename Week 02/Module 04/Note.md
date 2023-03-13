# Searching in Graph
```
We know that the graph is one non-linear data structure. In this data structure, we put some values into nodes, and the nodes are connected though different edges. As we can store data into the graph structure, we also need to search elements from the graph to use them.
For searching in graphs, there are two different methods.
1. BFS
2. DFS
```

## 1. BFS
```
The Breadth First Search (BFS) traversal is an algorithm, which is used to visit all of the nodes of a given graph. In this traversal algorithm one node is selected and then all of the adjacent nodes are visited one by one. After completing all of the adjacent vertices, it moves further to check another vertex and checks its adjacent vertices again. To implement this algorithm, we need to use the Queue data structure. All the adjacent vertices are added into the queue when all adjacent vertices are completed, one item is removed from the queue and start traversing through that vertex again.
```
### Implementation of BFS traversal on Graph:

**Follow the below method to implement BFS traversal.**
```
1. Declare a queue and insert the starting vertex.
2. Initialize a visited array and mark the starting vertex as visited.
3. Follow the below process till the queue becomes empty:
4. Remove the first vertex of the queue.
5. Mark that vertex as visited.
6. Insert all the unvisited neighbors of the vertex into the queue.
```

**Illustration:**
```
Step1: Initially queue and visited arrays are empty.
```
![BFS1](https://user-images.githubusercontent.com/119610761/224715430-b066cbc9-5547-4d87-850b-6a09e4d15e08.jpg)


```
Step2: Push node 0 into queue and mark it visited.
```
![BFS2](https://user-images.githubusercontent.com/119610761/224715569-0c041bf0-ccd1-4e17-b0ec-18a0e49ed7cf.jpg)


```
Step 3: Remove node 0 from the front of queue and visit the unvisited neighbours and push them into queue.
```
![BFS3](https://user-images.githubusercontent.com/119610761/224715710-029043cd-971a-4fd5-85a3-4ab009c45c20.jpg)


```
Step 4: Remove node 1 from the front of queue and visit the unvisited neighbours and push them into queue.
```
![BFS4](https://user-images.githubusercontent.com/119610761/224715880-22329b4e-74de-450a-9a25-d3c4d75118a4.jpg)


```
Step 5: Remove node 2 from the front of queue and visit the unvisited neighbours and push them into queue.
```
![BFS5](https://user-images.githubusercontent.com/119610761/224715999-3dd2576a-4fd6-4927-8ab2-ed28c1a4f858.jpg)


```
Step 6: Remove node 3 from the front of queue and visit the unvisited neighbours and push them into queue. 
As we can see that every neighbours of node 3 is visited, so move to the next node that are in the front of the queue.
```
![BFS6](https://user-images.githubusercontent.com/119610761/224716112-6f572612-a7c1-4cde-bd00-531b4c1ac602.jpg)


```
Steps 7: Remove node 4 from the front of queue and visit the unvisited neighbours and push them into queue. 
As we can see that every neighbours of node 4 are visited, so move to the next node that is in the front of the queue.
```
![BFS7](https://user-images.githubusercontent.com/119610761/224716258-98c3aa66-ad15-49f9-bc8a-376ed3fddc5f.jpg)


```
Now, Queue becomes empty, So, terminate these process of iteration.
```

**Pseudocode:**
```
Input -> Connected Graph and a "source"
Output -> Traverse all nodes and print the traversal order

BFS(graph,source):

- Initiate an array called "visited" and an empty queue "q"
- mark visited[source] = 1 and q.push(source)
- while the queue is not empty:
    - head = q.front()
    - q.pop()
    - print the node "head"
    - for all adjacent nodes of "head":
         - if visited[adj_node] == 0:
            - visited[adj_node] = 1 and q.push(adj_node)
```


**Complexity:**
```
Time Complexity: O(V+E), where V is the number of nodes and E is the number of edges.
Space Complexity: O(V).
```