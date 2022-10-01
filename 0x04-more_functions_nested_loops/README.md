# C More functions and nested loops

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://github.com/alxstudent-se/alx-system_engineering-devops.git)


#### 0-preprocessor
>Write a script that runs a C file through the preprocessor and save the result into another file.
The C file name will be saved in the variable $CFILE
The output should be saved in the file c
```sh
#!/bin/bash
gcc $CFILE -E -o c
```