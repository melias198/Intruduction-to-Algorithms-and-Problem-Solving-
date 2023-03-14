# 1. Perform BFS Traversal on the following graph and write the traversal output. Choose node 1 as the source. Determine the level of each node. Can you determine the cross edges?
![P1](https://user-images.githubusercontent.com/119610761/224886622-e6b44144-b459-4f23-a87d-f33e6f45ce8a.jpg)

```
BFS Traversal in this Graph:  1,4,2,3,7,8,5,6
```

```
Level of each node:
Level <--->   Node
  1    -->     1
  2    -->    4,2
  3    -->  3,7,8,5
  4    -->     6
```
![level](https://user-images.githubusercontent.com/119610761/225035581-063c9976-0cce-4002-b172-f4e1dcfe9c02.jpg)


```
Cross Edge:
          2 - 3
          7 - 8
          8 - 5
          7 - 5
```

# 2. Perform DFS Traversal on the following graph and write the traversal output. Choose node 4 as the source.
![P2](https://user-images.githubusercontent.com/119610761/225036957-63818557-fd2c-4ab7-9e37-79758374c99b.jpg)

```
DFS Traversal in this Graph: 4,1,2,5,6,8,7,3,9
```
![level2](https://user-images.githubusercontent.com/119610761/225045828-b7686b11-1087-44e6-86fb-a664db897fc4.jpg)


# 3. Can you think of a connected graph of 6 nodes where both DFS and BFS traversal would produce the same output?
![P3](https://user-images.githubusercontent.com/119610761/225055450-1954a4c4-83ae-4967-b464-b38ce143b65c.jpg)

```
In this Graph:
             BFS: 1,2,3,4,5,6
             DFS: 1,2,3,4,5,6
```


