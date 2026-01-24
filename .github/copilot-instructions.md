# Copilot Instructions for C Learning Codebase

## Project Overview
This is a **learning-focused C programming codebase** organized into three practice areas:
- **`code_chef/`** - Foundational C concepts (I/O, data types, arithmetic, operators)
- **`epic_code/`** - Advanced topics (pointers, functions with pointer parameters)
- **`pit_lightbulb/learnC/`** - Deep dives (type casting, numerical calculations)

## Code Organization & Patterns

### File Purpose
Each `.c` file is a **standalone practice program** with a specific learning objective. Files do NOT interact with each other. Each contains:
- A single `main()` function
- Simple, focused examples (typically 15-30 lines)
- Inline comments explaining the concept being demonstrated

### Typical Structure
```c
#include <stdio.h>          // Always used for I/O
int main() {
    // Variable declarations
    // Input operations (scanf)
    // Processing/calculations
    // Output (printf)
    return 0;               // Always present
}
```

### Printf & Format Specifiers
Programs heavily use `printf()` for output. Common patterns:
- `%d` for integers, `%ld` for long, `%f`/`%lf` for floats/doubles
- Escape sequences: `\n` (newline), `\t` (tab), `\"` (escaped quotes)
- Multi-line output: Stack multiple `printf()` calls (see `code_chef/scanMultiple.c`)
- Formatting: Tabs for alignment in menu displays (see `one_printf_menu_challenge.c`)

### Input Handling
Always use `scanf()` with address-of operator `&` on primitive types:
```c
int id;
scanf("%d", &id);          // Correct: &id passes address
scanf("%lf", &num);        // Double/float input
```

### Pointers & Functions
Advanced files (`epic_code/`) use pointers for output parameters:
```c
void decompose(double num, long *int_part, double *frac_part) {
    *int_part = (long) num;      // Dereference to modify
    *frac_part = num - *int_part;
}
// Called with addresses: decompose(5.7, &intP, &fracP);
```

## Common Tasks & Patterns

### Type Casting
Implicit: `(long) double_var` truncates decimal
```c
*int_part = (long) to_divide;  // Used in pointers2.c
```

### Arithmetic Operations
- Integer division `/` gives quotient; `%` gives remainder
- Mixed types auto-promote to larger type (int + double = double)

### Scope & Code Blocks
Some learning files use empty scopes `{ }` for organizational clarity (see `codeBlocksMonths.c`), not for actual scope restriction.

## Debugging & Testing

### Compilation
Files compile with standard `gcc` or `clang`:
```bash
gcc -o program_name program_name.c
./program_name
```

### Expected Behavior
- All programs should compile **without warnings**
- Input programs expect user input on stdin; test with piped input: `echo "5" | ./program`
- Output-only programs print to stdout with no user interaction

### Common Issues
- Missing `&` in `scanf()` → segmentation fault
- Wrong format specifier (`%d` for double) → garbage output
- Uninitialized pointer dereference → undefined behavior

## Key Files & Examples

| File | Concept | Pattern to Know |
|------|---------|-----------------|
| `code_chef/scanInteger.c` | Basic input | `scanf()` with address operator |
| `code_chef/one_printf_menu_challenge.c` | Formatted output | Escape sequences, tab alignment |
| `code_chef/integerDivisionDissected.c` | Operators | `/` (quotient) and `%` (remainder) |
| `epic_code/pointers1.c` | Pointers basics | Address (`&`) and dereference (`*`) |
| `epic_code/pointers2.c` | Function pointers | Pointer parameters for output |

## When Adding New Files
1. Place in appropriate directory based on complexity level
2. Keep to a single focused concept (e.g., one operator, one data type interaction)
3. Use `#include <stdio.h>` only
4. Include inline comment explaining the learning objective
5. Ensure compiles cleanly and demonstrates intended concept clearly
