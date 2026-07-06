# Chapter03_StudentRecords

A student records management system written in C++.

## 📋 Overview

This is a student records management application developed in C++ as part of Chapter 3 learning exercises. The project demonstrates data structures, file I/O operations, and object-oriented programming concepts through a practical student records system.

## 🛠️ Technology Stack

- **Language**: C++
- **Build System**: CMake (recommended)

## 🚀 Getting Started

### Prerequisites

- C++ compiler (C++11 or later)
- CMake 3.10 or higher (optional, but recommended)

### Building the Project

#### Using CMake (Recommended)

```bash
# Clone the repository
git clone https://github.com/liewvk/Chapter03_StudentRecords.git
cd Chapter03_StudentRecords

# Create a build directory
mkdir build
cd build

# Generate build files and compile
cmake ..
make
```

#### Using Direct Compilation

```bash
# Navigate to the project directory
cd Chapter03_StudentRecords

# Compile all source files
g++ -std=c++11 -o StudentRecords src/*.cpp
```

### Running the Application

```bash
./StudentRecords
```

## 📁 Project Structure

The project is organized as follows:

```
Chapter03_StudentRecords/
├── CMakeLists.txt          # CMake configuration file
├── src/                    # Source implementation files (.cpp)
├── include/                # Header files (.h)
├── data/                   # Data files (if applicable)
└── README.md               # This file
```

## ✨ Features

- **Student Record Management**: Create, read, update, and delete student records
- **Data Persistence**: Save and load records from files
- **Search and Filter**: Find student records by various criteria
- **Data Validation**: Input validation for student information
- **Object-Oriented Design**: Demonstrates class design and encapsulation

## 📝 Usage

### Basic Operations

The application supports the following operations:

1. **Add Student**: Create a new student record
2. **View Records**: Display all or specific student records
3. **Update Record**: Modify existing student information
4. **Delete Record**: Remove student records
5. **Search**: Find students by ID, name, or other criteria
6. **Save/Load**: Persist data to and from files

## 📚 Key Concepts Demonstrated

- Classes and Objects
- File I/O Operations
- Dynamic Memory Management
- Data Structures (Vectors, Arrays)
- String Manipulation
- Input Validation

## 📝 License

This project is currently unlicensed. Please refer to the repository for any licensing information.

## 👤 Author

[liewvk](https://github.com/liewvk)

## 🤝 Contributing

Contributions are welcome! Feel free to fork this repository and submit pull requests with improvements or additional features.

---

**Last Updated**: July 6, 2026
