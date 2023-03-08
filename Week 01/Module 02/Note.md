# 01. Representation of Graph
1. Adjacency Matrix
2. Adjacency List
3. Edge List

# 1. Graph to Adjacency Matrix
```
Adjacent Matrix(2D Array).
->Number of rows.
->Number of coloums.
->Matrix[i][j]=w(i,j).
->i-j 
```

### Undirected Unweighted
![M1](https://user-images.githubusercontent.com/119610761/223515762-26df915a-502c-43a8-a89a-c1757780b8bf.jpg)


```
*Total Edge:
0-1
1-0
1-2
1-3
2-1
2-3
3-1
3-2
*Adjacency Matrix:
0 1 0 0
1 0 1 1
0 1 0 1
0 1 1 0
```

### Directed Unweighted(With Self Loop)
![M2](https://user-images.githubusercontent.com/119610761/223515935-0e700a17-3ccc-4b2f-ae6d-fc24d89f45c0.jpg)


```
*Total Edge:
0-1
0-2
1-1
2-1
*Adjacency Matrix:
0 1 1
0 1 0
0 1 0
```

### Weighted Directed
![M3](https://user-images.githubusercontent.com/119610761/223516193-83fa030f-2ea7-4b6a-aeab-6ea4cbe80cb0.jpg)


```
*Total Edge:
0-1(3)
0-2(2)
2-1(4)
*Adjacency Matrix:
0 3 2
0 0 0
0 4 0
```

### Multi Edge With Self Loop(Directed Unweighted)
![M4](https://user-images.githubusercontent.com/119610761/223516316-cd59039c-fd25-4df4-b56b-ba85149c6a34.jpg)


```
*Total Edge:
0-1
1-1
2-1
2-1
*Adjacency Matrix:
0 1 0
0 1 0
0 2 0
**In unweighted graph total multi edge(path) it would be instead of 1.
```

# 2. Graph to Adjacency List
```
Linked List/C++ Vector.
```

### Undirected Unweighted
![M5](https://user-images.githubusercontent.com/119610761/223622806-0591d17f-05d8-40d7-909d-a7d06a81af40.jpg)


```
*Total Edge:
0-1
1-0
1-2
1-3
2-1
2-3
3-2
3-1
*Adjacency List:
0->1
1->0,2,3
2->1,3
3->1,2
```

### Directed Unweighted
![M6](https://user-images.githubusercontent.com/119610761/223622871-b9d39f19-3f09-4a87-abbb-ae185807752f.jpg)


```
*Total Edge:
0-1
1-2
3-1
3-2
*Adjacency List:
0->1
1->2
2->
3->1,2
```

### Multi Edge And Self Loop
![M7](https://user-images.githubusercontent.com/119610761/223623033-01f7be71-63dc-4ad1-838c-7631bad627aa.jpg)



```
*Total Edge:
0-1
0-1
1-1
1-2
3-1
3-2
3-2
*Adjacency List:
0->1,1
1->2,1
2->
3->1,2,2
```

### Weighted Directed
![M8](https://user-images.githubusercontent.com/119610761/223623097-2203d6fc-a774-4b06-876a-d66dd4107a1a.jpg)



```
*Total Edge:
0-0(5)
1-1(10)
1-2(3)
3-1(2)
3-1(7)
3-2(1)
*Adjacency List:
0->(1,5)
1->(2,3),(1,10)
2->
3->(1,2).(2,1),(1,7)
```

# 3. Graph to Edge List

### Undirected Unweighted
![M9](https://user-images.githubusercontent.com/119610761/223626369-8f37c702-0182-4378-8e87-f63c3dfd701e.jpg)


```
*Total Edge:
0-1
1-0
1-2
1-3
2-1
2-3
3-1
3-2
*Edge List:
[0,1]
[1,2]
[1,3]
[2,3]
```

### Directed Weighted
![M10](https://user-images.githubusercontent.com/119610761/223626451-80ab972e-e286-4b7b-b214-21191853ca52.jpg)


```
*Total Edge:
0-1(5)
1-2(3)
2-3(2)
1-3(1)
*Edge List:
[0,1,5]
[1,2,3]
[2,3,2]
[1,3,1]
```

### Self Loop And Multi Edge
![M11](https://user-images.githubusercontent.com/119610761/223626522-db69adf7-b143-4001-a5f9-c2d091522fa8.jpg)


```
*Total Edge:
0-1
0-1
1-1
1-2
3-2
3-1
*Edge List:
[0,1]
[0,1]
[1,1]
[1-2]
[3-2]
[3-1]
```

# 02. Time Complexity(Recap)

```
Time Complexity:
1.Assignment Operation(=)->O(1)
2.Arithmatic Operation(+,-,*,/)->O(1)
3.Boolean Operation(^)->O(1)
4.Loop->Depends on value of n
5.Function Call->O(1)
The Graph of Time Complexity:
```
![Time Complexity](https://user-images.githubusercontent.com/119610761/223628642-63b47cc1-1428-41f7-b3b9-ceb452203a9e.jpg)
