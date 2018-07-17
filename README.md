# DATA STRUCTURES
`A way to insert, access, delete, find, sort and organise and retrieve data in memory. There is not data structure that is equally good in all situations.`

General data structures in C, C++, Kotlin.

- Abstract Data type (ADT) " define ata and operations, but not implementation.
- Cost of operations in the worst case
    -   Time complexity: How often do you access data?
    -   Space complexity: How much data you need to store ?
- Implementation
- Searching
- Traversing
- Insertion
- Deletion
- Sorting
- Merging

##### ARRAY
A collection of items next to each other

**Multidimensional Array**: array of arrays, where each item in this array itself contains another array

**Jagged Array**: multidimensional array, where each item can have different size.

**Array List**: mutable and resizable array.

##### LIST
A collection of nodes ordered in a linear sequence

**Singly Linked List** collection of of nodes, where each node keep the reference of the nexst node.

**Doubly Linked List** each node has a reference to the next and previous node

**Circular Linked List** the head node has a reference to the tail node

**Stack** last in, first out _can be implemented using list or array_

**Queue** fist in, first out _can be implemented using list or array_

**Priority queue** queue, where items with higher priority step ahead of item with lower priority

**Deque** stack and queue at the same time
 
 ##### MAP / DICTIONARIES / ASSOCIATIVE ARRAY
 A collection where each item has a unique key and a value.
 
 ##### SET
 A collection of unordered items, with no repeated values.
 
 ##### TREE
 A collection of items, where each item might link to multiple nodes.
 
 **Binary tree** each node has at most 2 children
 
 **Binary Seach Tree** a specific type of binary tree, where the left child node is less than its parent, and a right node is greater than its parent.
 
 **Heaps** a specific type of binary tree, where we add node from top to bottom, left to right, and child nodes must be lest or greater than or equal their parents.
 
 ##### GRAPH
 A collection of items (vertices), where each item can link (edge) to multiple node. Unlike tree, there is no specific sequence, and no root node. It can be directed or undirected.

##### Sources
[omarelgabrys-blog](https://medium.com/omarelgabrys-blog/diving-into-data-structures-6bc71b2e8f92)

[swlh](https://medium.com/swlh/introduction-to-data-structures-9134b7d064a6)

[Tutorialspoint](https://www.tutorialspoint.com/data_structures_algorithms/data_structures_basics.htm)

[My Code School](https://www.youtube.com/watch?v=92S4zgXN17o&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)