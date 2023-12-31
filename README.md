# Sorting_Algo

This repo contains all the different types of sorting algorithm. The sorting algorithms can be classified using various factors. Such classifications can be used to decide which algorithm suits best for a particular application.
These algorithms can be sorted on the basis of

1. Time Complexity

- Comparison Based
  - O(n^2): Bubble, selection, insertion
  - O(nlogn): Merge, quick, heap, tim
- Non-Comparison Based
  - O(linear): count, radix, bucket

2. Space Complexity

- In-place: bubble, selection, insertion, quick, heap
- Out of place: merge, time, count, radix, bucket

3. Stability
   Preserves order of 'nodes' with same key value

- Stable: Merge, tim, bubble*, insertion*
- Unstable: quick, selection, heap

4. Adaptivity
   Take advantage of existing order of input data

- Adaptive: Insertion
- Non-adaptive: merge, quick, heap, selection

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

## Radix Sort

It is based on count sort and solves the problem when the range of array elements is too wide. First, find the maximum element. Then for each digit starting from the units place, sort all the numbers using count sort (based on their units digit). Repeat the sorting using the next decimal places to get the sorted array.

Should be used when the range is too wide and the number of digits isn't very high.

Time Complexity

- O(N\*D) where D is the number of digits in the max element

Space Complexity

- O(N)

## Bucket Sort

Scatter and gather approach. Normalize the elements to fit into range, take the floor of each to get the index and append the number to that index. Sort the individual buckets. Gather all buckets to get sorted array.

Used when elements have a **uniform** distribution within a certain range.
Can be used for floating point numbers

Time Complexity

- O(N) best case
- O(N+k) average case (max k elements in a bucket)
- O(N^2) worst case; all/max elements in a single bucket
