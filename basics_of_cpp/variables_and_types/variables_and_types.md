# Variable and types

### Type deduction: auto and decltype

- It suffices to use `auto` as the type specifier for the variable:

```
int foo = 0;
auto bar = foo; // the same as: int bar = foo;
```


- Variables that are not initialized can also make use of type deduction with
the `decltype` specifier:

```
int foo = 0;
decltype(foo) bar; // the same as: int bar;
```


### Introduction to strings

`endl` manipulator *end*s the *l*ine (printing a newline character and flushing
the stream).
