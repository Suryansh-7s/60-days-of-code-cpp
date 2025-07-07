# Week 2 – 60 Days of Code (C++)

## Day 1: 5th July 2025

### ✅ Q1: Keyboard Row (LeetCode #500)
- Solved using character mapping to keyboard rows and string validation
- Learned: Using arrays to map characters to their respective keyboard rows, and validating if all characters in a word belong to the same row
- Key insight: Pre-defined array mapping each letter to its row (1, 2, or 3) and checking consistency

### ✅ Q2: Relative Ranks (LeetCode #506)
- Implemented ranking system using sorting with index tracking
- Learned: Using `iota()` to create index array, sorting indices based on values, and assigning medals/ranks based on sorted positions
- Key insight: Sort indices instead of values to maintain original array positions while determining rankings

**Time Spent:** ~35 mins  
**Difficulty:** Easy  
**Reflection:** Both problems were straightforward array manipulation challenges. The keyboard row problem was a good exercise in character mapping, while the relative ranks problem reinforced the concept of sorting with index preservation. Both solutions are now fully runnable with test cases included.

---

## Day 2: 7th July 2025

### ✅ Q1: Array Partition (LeetCode #561)
- Solved by sorting the array and summing every alternate element
- Learned: The optimal way to maximize the sum of min pairs is to sort and pick every second element
- Key insight: Sorting ensures the smallest elements are paired together, maximizing the sum of mins

### ✅ Q2: Concatenation of Array (LeetCode #1929)
- Solved by iterating through the array and appending each element to the end
- Learned: Simple array manipulation and push_back for concatenation
- Key insight: Use the original array size to avoid infinite loop when appending to itself

**Time Spent:** ~30 mins  
**Difficulty:** Easy  
**Reflection:** Today's problems were good practice for basic array operations and algorithmic thinking. The array partition problem reinforced the value of sorting for greedy solutions, while the concatenation problem was a quick exercise in vector manipulation and indexing.