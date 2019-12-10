# Java Compiler 

A compiler for JAVA is created using lex and yacc. In addition to the constructs
specified, basic building blocks of the language (declaration statements, assignment
statements, etc) are handled.
This compiler is built keeping the various stages of Compiler Design, i.e., Lexical Analysis,
Syntax Analysis, Semantic Analysis and Code Optimisation in mind.
As a part of each stage, an auxillary part of the compiler is built (Symbol Table, Abstract
Syntax Tree and Intermediate Code). Each of these components are required to compile
code successfully.
In addition to this, basic error handling has also been implemented.
Through this process, all kinds of syntax errors and certain semantic errors in a JAVA
program can be caught by the compiler.

Simple constructs from the language JAVA were implemented. The frontend of the
compiler including Symbol table generation, Abstract Syntax tree construction, Intermediate
Code generation and Code Optimization was implemented using flex and bison.
