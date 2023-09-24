# Sorting Algorithms Project

## Overview
This project contains C implementations of several sorting algorithms along with their corresponding Big O notations for time complexity in different cases. The implemented sorting algorithms include Bubble Sort, Insertion Sort, Selection Sort, and Quick Sort. These algorithms are fundamental in computer science and are used to arrange data efficiently in ascending or descending order.

## Project Structure

### Source Files
- `0-bubble_sort.c`: Implementation of the Bubble Sort algorithm.
- `1-insertion_sort_list.c`: Implementation of the Insertion Sort algorithm for linked lists.
- `2-selection_sort.c`: Implementation of the Selection Sort algorithm.
- `3-quick_sort.c`: Implementation of the Quick Sort algorithm.

### Big O Notations
- `0-O`: Contains the Big O notations for the time complexity of Quick Sort in different cases:
  - Best Case
  - Average Case
  - Worst Case

## Usage
You can compile each source file separately to test the individual sorting algorithms. For example, to compile the Bubble Sort implementation, you can use the following command:

```shell
gcc -Wall -Werror -pedantic -o bubble_sort 0-bubble_sort.c
```

Replace `bubble_sort` with the desired executable name. Repeat this process for other source files as needed.

To run a compiled program, use:

```shell
./bubble_sort
```

## Big O Notations
The Big O notations in the `*-O` file represent the time complexity of the Quick Sort algorithm in different scenarios:
- Best Case: The minimum time complexity when Quick Sort performs optimally.
- Average Case: The expected time complexity under typical conditions.
- Worst Case: The maximum time complexity when Quick Sort performs poorly.

## Contributors
- [Joseph Abang](https://github.com/JosephAbang): Project creator and contributor.
