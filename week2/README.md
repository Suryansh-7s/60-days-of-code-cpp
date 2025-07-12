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
**Reflection:** Today’s problems were good practice for basic array operations and algorithmic thinking. The array partition problem reinforced the value of sorting for greedy solutions, while the concatenation problem was a quick exercise in vector manipulation and indexing.

---

## Day 3: 10th July 2025

### ✅ Q1: Senior Citizen (LeetCode #2678)
- Solved by extracting the age substring from each detail and counting those above 60
- Learned: String manipulation with substrings and conversion to integers using stoi
- Key insight: The age is always at a fixed position in the string, making extraction straightforward

### ✅ Q2: Is Subsequence (LeetCode #392)
- Solved using a two-pointer approach to check if one string is a subsequence of another
- Learned: Efficiently traversing two strings with a single loop and early exit
- Key insight: Increment the subsequence pointer only when a match is found, and return true if all characters are matched

**Time Spent:** ~25 mins  
**Difficulty:** Easy  
**Reflection:** Both problems were quick exercises in string manipulation and pointer logic. The senior citizen problem highlighted the importance of understanding string formats, while the subsequence problem reinforced the value of pointer-based traversal for sequence checking.

---

## Day 4: 11th July 2025

### ✅ Q1: Find Pivot Index (LeetCode #724)
- Solved using prefix sum approach with left and right sum tracking
- Learned: Using `accumulate()` function for array sum and efficient pivot index calculation
- Key insight: Track left sum and subtract current element from right sum, checking for equality at each position

### ✅ Q2: Isomorphic Strings (LeetCode #205)
- Solved using character mapping with index tracking for both strings
- Learned: Using arrays to map character positions and ensuring bidirectional consistency
- Key insight: Map each character to its last occurrence index and verify consistency in both directions

**Time Spent:** ~45 mins  
**Difficulty:** Easy  
**Reflection:** The pivot index problem was a good exercise in array manipulation and prefix sum concepts. The isomorphic strings problem reinforced the importance of bidirectional mapping validation. Both solutions are now fully runnable with comprehensive test cases included.

---

## Day 5: 12th July 2025

### ✅ Q1: Unique Email Addresses (LeetCode #929)
- Solved by normalizing email addresses (removing dots, ignoring text after '+', preserving domain)
- Learned: String parsing, use of `unordered_set` for uniqueness, and careful substring handling
- Key insight: Normalize the local part before the '@' and combine with the domain for uniqueness

### ✅ Q2: Maximum Number of Balloons (LeetCode #1189)
- Solved by counting character frequencies and determining the limiting letter for "balloon"
- Learned: Frequency counting with arrays, integer division for repeated letters, and use of `min` for constraints
- Key insight: The answer is limited by the least available required character, with 'l' and 'o' needed twice

**Time Spent:** ~30 mins  
**Difficulty:** Easy  
**Reflection:** Both problems were excellent practice for string and array manipulation. The email normalization problem highlighted the importance of careful parsing, while the balloon problem reinforced frequency analysis and constraint logic. Both solutions are now fully runnable with sample test cases.