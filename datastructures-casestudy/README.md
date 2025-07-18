# Spell Checker Using Binary Search Tree

## Authors 
Prasanna RDL

## 📖 Overview

This project is a spell checker tool implemented using a **Binary Search Tree (BST)**. The tool stores dictionary words in a BST and allows the user to check if a word exists in the dictionary. If the word is not found, it suggests alternative words based on their proximity in the BST.

## 🧠 Abstract

The spell checker uses a Binary Search Tree to quickly locate dictionary words. If a word is not found, it performs an in-order traversal to suggest the closest matches based on lexicographical order. This system demonstrates the efficiency and practicality of BSTs in real-world text-editing applications.

## 💡 Problem Statement

Create a spell checker that:
- Identifies whether a word is misspelled.
- Suggests alternatives if the word is not found.
- Uses a Binary Search Tree for storage and lookup.

## 🎯 Objectives

- ✅ Implement word search using a BST.
- ✅ Provide word suggestions for unrecognized words.
- ✅ Evaluate efficiency against traditional structures.

## 🛠️ Methodology

- **Data Structure Used**: Binary Search Tree (BST)
- **Language**: C
- **Operations**:
  - Insertion of dictionary words
  - Search operation in BST
  - In-order traversal to provide suggestions

## 🧪 Implementation

The spell checker allows the user to:
1. Input dictionary words to populate the BST.
2. Enter a word to be spell-checked.
3. Receive confirmation if the word is found.
4. Get word suggestions (via in-order traversal) if the word is not found.

Code includes:
- Node creation and insertion
- Word search
- Suggestion mechanism using in-order traversal

## 📈 Results

- **Efficiency**: Fast search due to O(log n) complexity.
- **Suggestions**: In-order traversal gives lexically close alternatives.
- **Limitations**: Performance may degrade if the BST becomes unbalanced.

## 💬 Discussion

The BST provides a simple yet effective way of managing dictionary data for a spell checker. To improve accuracy and balance:
- Use AVL or Red-Black Trees.
- Integrate Levenshtein Distance or other edit-distance algorithms for better suggestions.

## ✅ Conclusion

The project effectively demonstrates how a Binary Search Tree can be used to build a functional spell checker. While suitable for small to medium datasets, scalability can be improved with balancing and advanced suggestion techniques.

## 📚 References

- Weiss, M. A. (1997). *Data Structures and Algorithm Analysis in C*. Addison-Wesley.
- Cormen, T. H., Leiserson, C. E., Rivest, R. L., & Stein, C. (2009). *Introduction to Algorithms*. MIT Press.

## 🧪 Sample Test Case

**Input:**
