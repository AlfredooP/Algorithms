# DYNAMIC PROGRAMMING

Dynamic programming is a method for reducing the running time of an algorithm by using **overlapping subproblems** and **optimal substructures**.

---

## **When to Use Dynamic Programming (DP)?**
Dynamic programming is used for solving problems that consists of the following characteristics:

### Optimal Substructure:
The property Optimal substructure means that we use the optimal results of subproblems to achieve the optimal result of the bigger problem.

### Overlapping Subproblems:
The same subproblems are solved repeatedly in different parts of the problem

---

## **Approaches of Dynamic Programming (DP):**

Dynamic programming can be achieved using two approaches:

### Top-Down Approach (Memoization):
In the top-down approach, also known as memoization, we keep the solution recursive and add a memoization table to avoid repeated calls of same subproblems.

Before making any recursive call, we first check if the memoization table already has solution for it.
After the recursive call is over, we store the solution in the memoization table.

### Bottom-Up Approach (Tabulation):
In the bottom-up approach, also known as tabulation, we start with the smallest subproblems and gradually build up to the final solution.

We write an iterative solution (avoid recursion overhead) and build the solution in bottom-up manner.
We use a dp table where we first fill the solution for base cases and then fill the remaining entries of the table using recursive formula.
We only use recursive formula on table entries and do not make recursive calls.

---

## **Tabulation vs Memoization**

Tabulation and memoization are two techniques used to implement dynamic programming. Both techniques are used when there are overlapping subproblems (the same subproblem is executed multiple times). Below is an overview of two approaches.

### Memoization:
- Top-down approach
- Stores the results of function calls in a table.
- Recursive implementation
- Entries are filled when needed.

### Tabulation:
- Bottom-up approach
- Stores the results of subproblems in a table
- Iterative implementation
- Entries are filled in a bottom-up manner from the smallest size to the final size.


|                         | **Tabulation**                                                                                           | **Memoization**                                                                                          |
|-------------------------|-----------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------|
| **State**               | State transition relation is difficult to think                                                          | State Transition relation is easy to think                                                                 |
| **Code**                | Code gets complicated when a lot of conditions are required                                               | Code is easy to write by modifying the underlying recursive solution.                                      |
| **Speed**               | Fast, as we do not have recursion call overhead.                                                          | Slow due to a lot of recursive calls.                                                                      |
| **Subproblem solving**  | If all subproblems must be solved at least once, a bottom-up dynamic programming algorithm definitely outperforms a top-down memoized algorithm by a constant factor | If some subproblems in the subproblem space need not be solved at all, the memoized solution has the advantage of solving only those subproblems that are definitely required |
| **Table entries**       | In the Tabulated version, starting from the first entry, all entries are filled one by one               | Unlike the Tabulated version, all entries of the lookup table are not necessarily filled in Memoized version. The table is filled on demand. |

---

## References: 
- [Dynamic Programming (DP) Introduction - GeeksforGeeks](https://www.geeksforgeeks.org/dsa/introduction-to-dynamic-programming-data-structures-and-algorithm-tutorials/)
- [Tabulation vs Memoization - GeeksforGeeks](https://www.geeksforgeeks.org/dsa/tabulation-vs-memoization/)