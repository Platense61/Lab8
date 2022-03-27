# Lab8
cs141 lab8

# Some notes about this lab

Link to documentation on the specifics of find function [CLICK HERE](https://www.geeksforgeeks.org/string-find-in-cpp/)

Quick overview of how it works. Read in a string first. Then use the find function to locate first instance of the character ',' (comma). The output of this find function gets saved into a variable called found which has type size_t
[more on wtf size_t means, not to important](https://en.cppreference.com/w/cpp/types/size_t). 

Now this found variable gets run through an if else statement where it first asks if found DOES not equal string::npos, basically saying it did find the comma and uses substring function [more on substr](https://www.cplusplus.com/reference/string/string/substr/). Other else statement can be changed as needed.
