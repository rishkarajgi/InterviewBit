Given an absolute path for a file (Unix-style), simplify it.

Examples:

path = "/home/", => "/home"
path = "/a/./b/../../c/", => "/c"
Note that absolute path always begin with ‘/’ ( root directory )
Path will not have whitespace characters.

Hint:
More of a simulation problem. 
Break the string along ‘/’ and process the substrings in order one by one. ‘..’ indicates popping an entry unless there is nothing to pop.
