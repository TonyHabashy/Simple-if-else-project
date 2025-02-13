# Simple Even/Odd Checker

## Description
A simple C program that checks if a number is even or odd.  
It includes unit tests using the Unity framework.

## Installation

### **1. Install Dependencies**

#### **GCC (GNU Compiler Collection)**
- Install **MinGW-w64** from [MinGW-w64](http://mingw-w64.org/doku.php/download).
- Alternatively, install it from [nuwen.net](https://nuwen.net/mingw.html#install) (`mingw-19.0.exe`).
- Ensure `gcc.exe` is available in your system’s `PATH`.
- Verify the installation:
  ```bash or PoweShell
  gcc --version
  ```
  Example output:
  ```
  gcc.exe (GCC) 13.2.0
  ```

#### **Make (Build System)**
- `make` is required to build the project.
- Verify if it is installed:
  ```bash or PoweShell
  make --version
  ```
  Example output:
  ```
  GNU Make 4.4.1
  ```
- If `make` is not installed:
  - Install it via MinGW Installation Manager (`mingw-get`).
  - Alternatively, use Chocolatey:
    ```bash or PoweShell
    choco install make
    ```

#### **Unity Framework (For Testing)**
- Clone the Unity framework into the project directory:
  ```PoweShell
  git clone https://github.com/ThrowTheSwitch/Unity.git Unity
  ```

### **2. Clone the Repository**
```PowerShell
git clone https://github.com/TonyHabashy/simple-if-else.git
```
Navigate to the project directory:
```PowerShell
cd simple-if-else
```

## **Build the Project**
Run the following command to compile the project:
```PowerShell
make
```

## **Run Tests**
Execute the test binary:
```sh
./test_checkNumber.exe
```

## **Usage**
- The program checks whether an input number is even or odd and prints the result.
- Test cases cover:
  - Positive and negative numbers
  - Large numbers
  - Edge cases (e.g., zero)
