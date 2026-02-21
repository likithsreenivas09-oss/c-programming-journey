# C Programming Journey

This repository contains my structured practice and learning of C programming fundamentals as part of my BCA coursework.

---

## Topics Covered

- Pattern Printing
- Loops and Conditionals
- Nested Loops
- Arrays
- Linear Search
- 3D Arrays
- Logical Problem Solving

---

## Day 1 – Inverted Repeating Number Pattern

### Example (n = 4)

```
1111
222
33
4
```

Location:  
patterns/inverted_repeating_number_pattern.c

---

## Day 2 – Symmetric Star Pattern

### Example (n = 4)

```
*
**
***
****
***
**
*
```

Location:  
patterns/symmetric_star_pattern.c

---

## Day 3 – Arrays in C

### Program: Sum and Average of N Elements

- Took input of N numbers using array
- Used loop to read elements
- Calculated total sum
- Calculated average

Concepts Used:
- Arrays
- for loop
- scanf and printf
- Arithmetic operations

Location:  
arrays/sumANDAverage.c

---

## Day 4 – Linear Search in C

### Program: Search an Element in an Array

- Accepted array input
- Searched for a given key
- Displayed position if found
- Displayed "Not Found" otherwise

Concepts Used:
- Arrays
- for loop
- Conditional statements
- Linear search logic

Location:  
arrays/searchelement.c

---

## Day 5 – 3D Array Student Result Management

### Program: Student Marks Using 3D Array

- Stored marks using a 3D array (students × subjects × semesters)
- Calculated total marks for each student
- Calculated average marks
- Identified top scoring student

Concepts Used:
- 3D Arrays
- Nested loops
- Aggregation logic
- Conditional comparison

Location:  
arrays/student_result_3d_array.c

---

## Day 6 – Maximum Element in 3D Array

### Program: Find Maximum Element and Its Position

- Accepted input for a 3D array (layers × rows × columns)
- Stored values using nested loops
- Traversed entire 3D array
- Found maximum element
- Displayed its layer, row, and column position

Concepts Used:
- 3D Arrays
- Triple nested loops
- Comparison logic
- Index tracking

Location:  
arrays/max_3d_array.c

---

## Day 7 – Search Element in 3D Array

### Program: Linear Search in 3D Array

- Accepted size of 3D array from user
- Validated dimensions
- Stored elements using nested loops
- Searched for first occurrence of a value
- Displayed layer, row and column position

Concepts Used:
- 3D Arrays
- Triple nested loops
- Search logic
- Validation check

Location:  
arrays/3d_array_search.c

---

## How to Compile and Run

Make sure GCC is installed.

### Compile Any File

```
gcc path/to/filename.c -o program
./program        (Linux / WSL)

OR

program          (Windows MinGW)
```

Example:

```
gcc arrays/max_3d_array.c -o program
./program
```

---

This repository will continue to grow as I progress into:

- More C programs
- Data structures
- Mini projects
- Full-stack development projects