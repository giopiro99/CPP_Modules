# 🧩 C++ Modules — 42 School

**C++ Modules** is a comprehensive series of projects from the **42 School** curriculum designed to teach **Object-Oriented Programming (OOP)** using C++98.
Starting from the basics of the language, the curriculum progresses through advanced concepts like polymorphism, templates, exception handling, and the Standard Template Library (STL).

## 📂 Module Structure

Each directory contains specific exercises designed to tackle a particular concept of C++.

| Module | Topic | Key Concepts |
| :--- | :--- | :--- |
| **[CPP00](./CPP00)** | **Introduction** | Namespaces, Classes, Member functions, `std::iostream`, `std::string`. |
| **[CPP01](./CPP01)** | **Memory & Pointers** | `new`/`delete`, References, Pointers to members, File I/O. |
| **[CPP02](./CPP02)** | **Polymorphism (Ad-hoc)** | Operator Overloading, Orthodox Canonical Form, Fixed-point numbers. |
| **[CPP03](./CPP03)** | **Inheritance** | Derived classes, Access specifiers, Diamond inheritance problem. |
| **[CPP04](./CPP04)** | **Polymorphism (Subtype)** | Virtual functions, Abstract classes, Interfaces, Deep copies. |
| **[CPP05](./CPP05)** | **Exceptions** | `try`/`catch`/`throw`, Custom Exception classes, nested classes. |
| **[CPP06](./CPP06)** | **Casts** | `static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast`, Serialization. |
| **[CPP07](./CPP07)** | **Templates** | Function templates, Class templates, Generic programming. |
| **[CPP08](./CPP08)** | **STL Containers** | `std::vector`, `std::list`, Algorithms, Iterators. |
| **[CPP09](./CPP09)** | **STL (Bonus/Advanced)** | Advanced containers (`std::map`, `std::stack`, `std::deque`), Ford-Johnson algorithm. |

---

## ⚙️ How to Compile & Run

Each exercise is self-contained and comes with its own `Makefile`.

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/giopiro99/cpp_modules.git](https://github.com/giopiro99/cpp_modules.git)
    cd cpp_modules
    ```

2.  **Navigate to an exercise:**
    ```bash
    cd CPP0X/ex0Y
    # Example: cd CPP01/ex00
    ```

3.  **Compile:**
    ```bash
    make
    ```

4.  **Run:**
    ```bash
    ./program_name
    # Example: ./zombie
    ```

> *Note: All code is compiled with `c++ -Wall -Wextra -Werror -std=c++98`.*

---

## 🎯 Project Goals

* **OOP Paradigm:** Transitioning from procedural C programming to Object-Oriented C++.
* **Memory Management:** Mastering manual memory management in C++ (`new`/`delete`) versus C (`malloc`/`free`).
* **Robustness:** Writing code that strictly follows the **Orthodox Canonical Form** and handles edge cases/exceptions.
* **Generic Programming:** Understanding the power of Templates and the STL to write reusable and efficient code.

---

## 🧾 License

This project is distributed under the MIT License.
