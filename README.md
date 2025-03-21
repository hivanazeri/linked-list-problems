# linked-list-problems

This repository contains solutions to two **linked list** problems implemented in C++.


### 1. **Remove Zero-Sum Subsequences (`dzt.cpp`)**
   - **Description**:  
     Given an array of integers, store them in a **linked list** and then remove consecutive elements whose sum is zero. This process continues until no such subsequences exist.
   - **Input**:  
     - First line: An integer `n` (size of the linked list).
     - Second line: `n` integers representing the linked list elements.
   - **Output**: The modified linked list after all zero-sum sequences are removed.
   - **Example**:
     ```
     Input:
     5
     1 2 -3 3 1

     Output:
     1 2 1
     ```
     ```
     Input:
     5
     1 2 3 -3 -2

     Output:
     1
     ```

### 2. **Linked List Operations (`LinkedListOperations.cpp`)**
   - **Description**:  
     This program implements various operations on a **singly linked list**, including:
     - **Insertion (Insert)**:
       - At the beginning
       - After a given node
       - At the end
     - **Deletion (Delete)**
     - **Searching (Search)**
     - **Sorting (Sort)**
   - **Example Usage**:
     ```cpp
     insertAtEnd(&head, 1);
     insertAtBeginning(&head, 2);
     insertAtBeginning(&head, 3);
     insertAtEnd(&head, 4);
     insertAfter(head->next, 5);
     ```
   - **Sample Output**:
     ```
     Linked list: 3 2 5 1 4
     After deleting an element: 2 5 1 4
     3 is not found
     Sorted List: 1 2 4 5
     ```

## How to Compile and Run

Each program can be compiled and executed using a C++ compiler (`g++` or `clang++`).

```sh
g++ dzt.cpp -o dzt && ./dzt
g++ LinkedListOperations.cpp -o LinkedListOperations && ./LinkedListOperations
