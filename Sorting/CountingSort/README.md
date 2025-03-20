# Counting Sort

Counting Sort is a **non-comparison-based sorting algorithm** that **counts the frequency of each distinct element** to sort the array. It is efficient when the range of elements is small relative to the number of elements to be sorted, as the **maximum element determines the range**.

---

## ✅ **Advantages:**
- Simple and easy to implement.
- Can be faster than comparison-based algorithms when the range is small.

---

## ❌ **Disadvantages:**
- Does not work with **decimal numbers** or **negative numbers**.
- Inefficient when the range of values is very large.
- Requires **extra space** for counting the frequencies.

---

## 🛠️ **Applications:**
- Sorting unique identifiers within a small range.
- Organizing data in **signal processing** or **graphics applications**.
- Sorting exam scores or counting the frequency of characters in a string.

---

## **Visual Representation:**
![Counting Sort Visualization](https://www.happycoders.eu/wp-content/uploads/2020/08/counting_sort_algorithm_counting_steps_5_and_6.png.png)

---

## **Time Complexity:**
| Case             | Time Complexity | Description |
|-----------------|--------------------|--------------------------|
| ✅ Best Case       | O(n) | When the range (`k`) is very small compared to the number of elements (`n`). |
| ✅ Average Case | O(n + k) | Standard performance when the range is moderate. |
| ✅ Worst Case     | O(n + k) | When the range (`k`) is significantly larger than the number of elements. |

- `n` = Number of elements in the input array.  
- `k` = Range of the elements.  

---

## How does it work?
1. Count the occurrences of each element.  
2. Calculate the cumulative sum.  
3. Place the elements in their correct position.  

---

## References:
- []

