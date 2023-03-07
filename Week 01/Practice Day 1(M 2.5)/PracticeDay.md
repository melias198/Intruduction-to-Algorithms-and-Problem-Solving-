# 1. How many edges does a tree with n nodes have?
```
In tree with n node has (n-1) edge.
Proof: Every node except the root has exactly one in-coming edge. Since there are n -1 nodes other than the root, there are n-1 edges in a tree.
```
![Tree Edge](https://user-images.githubusercontent.com/119610761/223481520-9eca8ac3-646f-423c-a00d-5684f0a77ada.jpg)


# 2. How many edges does a complete graph with n nodes have?
```
In a complete graph with n node has n*(n-1)/2 Edge.
Proof: 
*K(N) has N vertics.
*Each vertex has degree N-1
*The sum of all degree is N*(N-1)
*Now, the Handshaking Theorem tells us that...
-->The number of edges is K(N) is : N*(N-1)/2.
```
![Complete Graph Edge f](https://user-images.githubusercontent.com/119610761/223484582-e86b17cb-dc12-4e71-8790-fb83f4b93bec.jpg)


# 3. Convert the following Adjacency Matrix into an Adjacency List and draw the graph.(no need to code)
```
*Matrix Adjacency:
1 0 0 1
1 0 1 0
0 1 0 1
0 0 1 1
*List Adjacency:
0->0,1,3
1->0,2
2->1,3
3->0,2,3
*Graph:
```
![3numberGraphf](https://user-images.githubusercontent.com/119610761/223492774-97cfd23e-92b2-4482-a2ba-c6ae53cb45d7.jpg)



# 4.Convert the following Adjacency List into an Adjacency Matrix and draw the graph(no need to code).
```
*List Adjacency:
A -> B, C
B -> B, A, D
C -> D, A
D -> A
*Matrix Adjacency:
0 1 1 1
1 1 0 1
1 0 0 1
1 1 1 0
*Graph:
```
![4numberGraph](https://user-images.githubusercontent.com/119610761/223491684-511b5062-805c-4fd6-a4cd-dfd97c64edba.jpg)


# 5.Convert the following edge list of an undirected graph to its respective Adjacency List representation.
```
*Adjacency List:
[
  [A, B, 1]
  [B, C, 3]
  [C, A, 2]
  [E, F, 9]
  [C, D, 1]
  [E, F, 7]
]
*Graph:
```
![5numberGraph](https://user-images.githubusercontent.com/119610761/223494473-8ff0df63-ffff-4e13-a993-26c6c6d2d533.jpg)

### a. Is the graph weighted or unweighted?
```
It is weighted graph.
```

### b. Does the graph have cycles?
```
Yes! It have a cycle.
```

### c. If the graph has cycles, remove some edges to make it acyclic (i.e. with no cycle)
```
[A, B, 1]
[B, C, 3]
[C, A, 2]
These are edges created cycle,if i remove one,then it would be acyclic.
```
![AcyclicGraph](https://user-images.githubusercontent.com/119610761/223495930-f3ddae53-5893-4503-b6cf-2dcdec6e6c9c.jpg)


### d. Has the graph become a tree? Why or why not?
```
The Graph is not a tree. Because Tree represents the nodes connected by edges.Tree has no cycle and each node connected by edges and unique path between two nodes.
But In this Graph E-F node separated from other node,that's why the graph not a tree.
```

### e. If not, then add edges to make it a tree.
```
If we connected any node to E-F node then it would be a tree.
```
![TreeF](https://user-images.githubusercontent.com/119610761/223497222-9bb0450e-f169-48a3-b50c-e8157b75b327.jpg)

