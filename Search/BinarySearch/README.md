# Binary Search
Binary Search Algorithm is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half until de target is found or not.

It's more efficient than other searching algorithms with a similar time complexity, such as interpolation search or exponential search.

---

## **Visual Representation:**
![Binary Search Visualization](https://media.geeksforgeeks.org/wp-content/uploads/20240506155201/binnary-search-.webp)

---

## **Time Complexity:**
- Best Case: O(1)
- Average Case: O(log N)
- Worst Case: O(log N)

---

## How does it work?
1. It divide the space into two halves
2. Compares the mid element with the target
3. If the target is found, finish the process.
4. If the target is not found, then choose which half will be used for the next space.
    - If the target is greater, go to the right side
    - If the target is smaller, go to the left side
5. The process continuos until the target is found or the total search space is exhausted.

---

## References:
- [GeeksForGeeks - Binary Search](https://www.geeksforgeeks.org/binary-search/)