# C and Object-Oriented Programming

Course exercises, assignments and small projects written in C and C++.

## Contents

### `01-c-programming/`

| Folder | What is in it |
| --- | --- |
| `cpp-basics/` | C++ basics: variables, input, operators, if/else, loops, strings, pointers and simple file I/O |
| `c-exercises/` | C exercises: arithmetic, arrays, matrices, functions, prime check, switch/case, a calculator and a volume calculator |
| `projects/` | A console Snake game and rock-paper-scissors |
| `assignments/` | Lab assignments, homework and quizzes, including a file-based student records program |

### `02-object-oriented-programming/`

| Folder | What is in it |
| --- | --- |
| `exercises/` | Weekly C++ exercises: classes, pointers and references, getline, a vector menu and a substitution cipher |
| `assignments/` | Employee and Matrix class assignments |
| `quizzes/` | Quiz solutions, including a book store program with its stock file |
| `midterm/` | Midterm solutions |
| `final/` | Final projects: a TV shop and a coffee shop stock tracker, each with its own stock file |

## How to build

Any C++ compiler works, for example:

```
g++ file.cpp -o program
```

Programs that read a data file (`stock.txt`, `book_store.txt` and similar) expect it in the current directory, so run them from their own folder. Projects with a header (`.h`) are built from their folder, for example `g++ *.cpp -o program`.

The Snake game uses `conio.h` and `windows.h`, so it builds on Windows only.
