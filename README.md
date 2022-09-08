# Shell Basics

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://github.com/alxstudent-se/alx-system_engineering-devops.git)


#### 0-iam_betty
>Create a script that switches the current user to the user betty.

```sh
#!/bin/bash
su betty
```
#### 1-who_am_i
>Write a script that prints the effective username of the current user.


```sh
#!/bin/bash
whoami
```
#### 2-groups
>Write a script that prints all the groups the current user is part of.

```sh
#!/bin/bash
groups
```
#### 3-new_owner
>Write a script that changes the owner of the file hello to the user betty.


```sh
#!/bin/bash
chown betty hello
```
#### 4-empty
>Write a script that creates an empty file called hello.

```sh
#!/bin/bash
touch hello
```
#### 5-execute
>Write a script that adds execute permission to the owner of the file hello.

```sh
#!/bin/bash
chmod u+x hello
```
#### 6-multiple_permissions
>Write a script that adds execute permission to the owner and the group owner, and read permission to other users, to the file hello.

```sh
#!/bin/bash
chmod 754 hello
```

#### 7-everybody
>Write a script that adds execution permission to the owner, the group owner and the other users, to the file hello

```sh
#!/bin/bash
chmod ugo+x hello
```
#### 8-James_Bond
>Write a script that sets the permission to the file hello as follows:

Owner: no permission at all
Group: no permission at all
Other users: all the permissions

```sh
#!/bin/bash
chmod 007 hello
```
#### 9-John_Doe
>Write a script that sets the mode of the file hello to this:

```sh
#!/bin/bash
chmod 753 hello
```
#### 10-mirror_permissions
>Write a script that sets the mode of the file hello the same as olleh’s mode.

```sh
#!/bin/bash
chmod --reference=olleh hello
```
#### 11-directories_permissions
>Create a script that adds execute permission to all subdirectories of the current directory for the owner, the group owner and all other users. Regular files should not be changed.

```sh
#!/bin/bash
chmod -R +X .
```
#### 12-directory_permissions
>Create a script that creates a directory called my_dir with permissions 751 in the working directory.

```sh
#!/bin/bash
mkdir -m 751 my_dir
```
#### 13-change_group
>Write a script that changes the group owner to school for the file hello

```sh
#!/bin/bash
chgrp school hello
```
#### 100-change_owner_and_group
>Write a script that changes the owner to vincent and the group owner to staff for all the files and directories in the working directory.

```sh
#!/bin/bash
chown vincent:staff *
```
#### 101-symbolic_link_permissions
>Write a script that changes the owner and the group owner of _hello to vincent and staff respectively.

```sh
#!/bin/bash
chown -h vincent:staff _hello
```
#### 102-if_only
>Write a script that changes the owner of the file hello to betty only if it is owned by the user guillaume.

```sh
#!/bin/bash
chown --from=guillaume betty hello
```
#### 103-Star_Wars
>Write a script that will play the StarWars IV episode in the terminal.

```sh
#!/bin/bash
telnet towel.blinkenlights.nl
```