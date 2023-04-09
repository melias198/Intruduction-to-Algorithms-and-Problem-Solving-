## Bellman-Ford Algorithm:
```
Bellman Ford algorithm helps us find the shortest path from a vertex to all other vertices of a weighted graph.
It is similar to Dijkstra's algorithm but it can work with graphs in which edges can have negative weights.
```

### How Bellman Ford's algorithm works:
```
Bellman Ford algorithm works by overestimating the length of the path from the starting vertex to all other vertices. Then it iteratively relaxes those estimates by finding new paths that are shorter than the previously overestimated paths.
By doing this repeatedly for all vertices, we can guarantee that the result is optimized.
```
**Step 1:**
![BF1](https://user-images.githubusercontent.com/119610761/230782123-362f66d2-5bc0-404c-86d9-53a359de680a.jpg)



**Step 2:**
![BF2](https://user-images.githubusercontent.com/119610761/230782140-c699683d-54c2-4c55-8861-00b5378baedd.jpg)



**Step 3:**
![BF3](https://user-images.githubusercontent.com/119610761/230782159-aa7fa084-f76c-45ac-9aad-689db0f02265.jpg)



**Step 4:**
![BF4](https://user-images.githubusercontent.com/119610761/230782183-fd5f7b13-f716-404a-b12e-1e81f1db2f7d.jpg)



**Step 5:**
![BF5](https://user-images.githubusercontent.com/119610761/230782202-99e93630-012d-4466-a65c-2bf3d44173b4.jpg)



**Step 6:**
![BF6](https://user-images.githubusercontent.com/119610761/230782238-2e00046b-8e07-47b3-be87-e763f5e8004c.jpg)
