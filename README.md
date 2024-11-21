# Push_Wap

The **push_wap** project is designed to implement a sorting algorithm leveraging the efficiency of the **Radix Sort** algorithm. This project is part of the 42 school curriculum, challenging students to optimize data sorting through algorithmic problem-solving and efficient memory management.

---

## Purpose

The **push_wap** project aims to:
- Introduce students to advanced sorting algorithms.
- Provide practical experience with the **Radix Sort**, a non-comparative sorting algorithm.
- Enhance understanding of algorithmic efficiency in terms of time and space complexity.
- Foster the development of clean, modular, and efficient code.

---

## Features

- **Efficient Sorting**: Implements the **Radix Sort** algorithm, which efficiently handles large datasets.
- **Base-Flexible Sorting**: The algorithm processes numbers in different bases, typically binary or decimal.
- **Scalability**: Capable of sorting both small and large datasets with consistent performance.
- **Memory Management**: Dynamically allocates memory for handling variable-sized datasets.
- **Modularity**: Clean and reusable functions for integration into larger projects.

---

## Algorithm Overview

**Radix Sort** works by sorting numbers digit by digit, starting from the least significant digit to the most significant. It uses a stable subroutine (e.g., counting sort) to ensure numbers remain in the correct order after processing each digit.

### Steps:
1. Determine the maximum number in the dataset to identify the number of digits.
2. Iterate through each digit, grouping numbers based on their value at the current digit.
3. Sort each group using a stable sorting method.
4. Reassemble the numbers and repeat until all digits have been processed.

