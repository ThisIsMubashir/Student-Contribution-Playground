# Student-Contribution-Playground

A simple C library containing small utility functions (string, math, file helpers). Students will add new functions, fix bugs, improve documentation, and follow real contribution rules.

Student will learn how to:

✅ Fork a repository  
✅ Create branches  
✅ Fix issues  
✅ Add new C functions  
✅ Create Pull Requests following guidelines  
✅ Work in a real open-source project environment  

This project provides a small collection of helper functions in C, such as:

- String utilities  
- Math utilities  
- File utilities  
- Demo usage  
- Test runner  

Students will contribute by fixing bugs, adding functions, writing documentation, and improving code quality.

---

## 📦 Build Instructions

```bash
gcc src/cutility.c src/fileutils.c examples/demo.c -I include -o demo ./demo
```

## 🤝 Contributing

Before contributing, please read:

- [CONTRIBUTING.md](CONTRIBUTING.md)
- [Pull Request Guidelines](PULL_REQUEST_GUIDELINES.md)


## 📚 Example Usage

```c
#include "cutility.h"
#include <stdio.h>

int main() {
    printf("Uppercase: %s\n", to_uppercase("hello"));
    printf("Square: %d\n", square(5));
    return 0;
}
```

## 🧪 Running Tests

```
gcc src/cutility.c test/test_runner.c -I include -o tests ./tests
```
## 👥 Contributors

See contributions in pull requests.