# Compilers

### What is a compiler?

Computers understand only one language and that language consists of
sets of instructions made of ones and zeros. This computer language is called 
machine language.

Programming a computer directly in machine language using only ones and zeros
is tedious and error prone.

Because a computer can only understand machine language and humans wish to write
in high level languages. High level languages have to be translated into machine
languages at some point. This is done by special programs called compilers,
interpreters, or assemblers that are built into the various programming
applications.


### How to use

| Compilers | Platform               | Command                                                          |
|-----------|------------------------|------------------------------------------------------------------|
| GCC       | Linux, among others... | `g++ -std=c++0x example.cpp -o example_program`                    |
| CLANG     | OS X, among others...  | `clang++ -std=c++11 -stdlib=libc++ example.cpp -o example_program` |
