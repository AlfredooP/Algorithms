# BREADTH FIRST SEARCH (BFS)

BFS is a fundamental **graph tranversal algorithm**. It begins with a node, the first traverses all its adjacent nodes. Once all adjacent are visited, then their adjacent are tranversed.

---

## 🛠️ **Applications:**
- Find Shortest path in an unweighted graph.
- Some algorithms are based on BFS. (Dijkstra, Kahn and Prim algorithms)
- Cycle Detection.
- Topological Sorting

---

## **Visual Representation:**
![BFS Visualization](/Sources/BFS.gif)

---

## **Time Complexity:**
The time complexity of BFS is O(V + E), where V is the number of vertices and E is the number of edges in the graph. 
---

## How does it work?
1- Initialization: Enqueue the given source vertex into a queue and mark it as visited.
2- Exploration: While the queue is not empty:
    -Dequeue a node from the queue and visit it (e.g., print its value).
    -For each unvisited neighbor of the dequeued node:
    -Enqueue the neighbor into the queue.
    -Mark the neighbor as visited.
3- Termination: Repeat step 2 until the queue is empty.

## References: 
- [geeksforgeeks - Breadth First Search or BFS for a Graph](https://www.geeksforgeeks.org/counting-sort/)