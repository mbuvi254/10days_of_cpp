# 10days_of_cpp

# 1. Basic compilation
```bash
g++ main.cpp -o main
```
- `main.cpp` → your C++ source file
- `-o main` → output executable named `main`

Run it:
```bash
./main
```

# 2. Compile with warnings (recommended)
```bash
g++ -Wall -Wextra -Wpedantic main.cpp -o main
```
This helps catch common bugs early.

# 3. Specify C++ standard
Examples:
```bash
g++ -std=c++17 main.cpp -o main
g++ -std=c++20 main.cpp -o main
g++ -std=c++23 main.cpp -o main

# Check supported versions
g++ --version
```


# 4. Compile multiple files
```bash
g++ main.cpp utils.cpp wallet.cpp -o app

# Or with headers automatically included:
g++ *.cpp -o app
```


# 5. Compile only (no linking)
```bash
g++ -c main.cpp
```
Produces: `main.o`

Then link later:
```bash
g++ main.o utils.o -o app
```


# 6. Add include directories
```bash
g++ -Iinclude main.cpp -o app
```
Example project structure:
```
project/
├── include/
│   └── wallet.h
├── src/
│   └── wallet.cpp
└── main.cpp
```

Compile with:
```bash
g++ -Iinclude main.cpp src/wallet.cpp -o app
```


# 7. Link libraries

### System libraries
```bash
g++ main.cpp -lm -pthread -o app
```

### OpenSSL (common in your projects)
```bash
g++ main.cpp wallet.cpp -lssl -lcrypto -o app
```

### With custom include paths:
```bash
g++ -I/usr/include/openssl main.cpp -lssl -lcrypto -o app
```


# 8. Debug build
```bash
g++ -g -O0 main.cpp -o app
```

Run with gdb:
```bash
gdb ./app
```


# 9. Release build (optimized)
```bash
g++ -O2 -DNDEBUG main.cpp -o app
```


# 10. Using gcc directly (NOT recommended)
You can do this, but you must manually link C++ stdlib:
```bash
gcc main.cpp -lstdc++ -o app
```

> **Best practice**: Always use `g++` for C++ projects.

# 11. Typical command for serious projects
```bash
g++ -std=c++20 -Wall -Wextra -O2 -Iinclude src/*.cpp main.cpp -lssl -lcrypto -o app
```

# Makefile To Compile

