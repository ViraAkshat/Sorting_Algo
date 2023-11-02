# Sorting_Algo

This repo contains all the different types of sorting algorithm

## Bubble Sort

Float the smallest value to the front or the largest value to the end; one by one by comparing adjacent values and swapping accordingly
Time complexity:

- O(N^2) for worst case
- O(N) for best case

## Selection Sort

Find the minimum element in the unsorted region of array, swap it with the first element in unsorted array, repeat
Time complexity

- O(N^2)

## Insertion Sort

Check if the current element and the previously scanned part of array is sorted or not. if not the sort by swapping the current element with adjacent element(s) till it gets sorted
Time complexity

- O(N^2)

## Merge Sort

Divide the array into smaller segments until you reach single unit. Now, merge the divided array in sorted form. Select the divided half arrays, compare each element and keep adding the next smaller number to a temp array. Finally, change the original array, recursively
Time Complexity

- O(NlogN)
  N for sorting at each step and a total of log2(N) (halving the array at every step recursively)

## Quick Sort

Fix a pivot (for example, the 1st element of the unsorted region of array). Set low and high pointers, compare and shift the pivot to its designated position. Recursively sort the unsorted array on left and right of the pivot.
Time complexity

- O(NlogN)
  N for sorting at each step and a total of logN steps (dividing the array in 2 unsorted arrays recursively)

## Counting Sort

Find the max element. Make a frequency array of size max element + 1. Its value denotes the frequency of its index in the original array. Now, calculate the cumulative frequency array. Then, traverse the original array in reverse fashion, for every data point, decrement the frequency by 1 and place the number at that location (corresponding to the new cumulative frequency). Repeat to get the sorted array.

Useful when the array has repeated (integer) elements, within a short comparable range.
For negative numbers, the array can be normalized for count sort (subtract the minimum number from every element and implement count sort as it is).

Time Complexity

- O(N+k); k is max element

Space Complexity

- O(N+k)
