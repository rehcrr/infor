
   localhost:~# emacs lab8.c
   ^Z[1]+  Stopped                    emacs lab8.c
   localhost:~# fg
   emacs lab8.c
   localhost:~# cc lab8.c
   localhost:~# ls
   a.out  lab8.c
   localhost:~# gcc -std=c99 -Wall -pedantic lab8.c
   localhost:~# ls
   a.out  lab8.c
   localhost:~# emacs lab8.c
   ^Z[1]+  Stopped                    emacs lab8.c
   localhost:~# cc lab8.c
   localhost:~# gcc -std=c99 -Wall -pedantic lab8.c
   main.c:9:2: error: invalid preprocessing directive #inclukhude; did you mean #include?
    9 | #inclukhude <stdio.h>
      |  ^~~~~~~~~~
      |  include
main.c: In function ‘main’:
main.c:13:5: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
   13 |     printf("Hello ");
      |     ^~~~~~
main.c:1:1: note: include ‘’ or provide a declaration of ‘printf’
  +++ |+#include <stdio.h>
    1 | /******************************************************************************
main.c:13:5: warning: incompatible implicit declaration of built-in function ‘printf’ [-Wbuiltin-declaration-mismatch]
   13 |     printf("Hello ");
      |     ^~~~~~
main.c:13:5: note: include ‘’ or provide a declaration of ‘printf’
   localhost:~# emacs lab8.c
   ^Z
   [2]+  Остановлен    emacs lab8.c
   localhost:~# gcc -std=c99 -Wall -pedantic lab8.c
   localhost:~# ls
   a.out  lab8.c  lab8.c~
   localhost:~# gcc -std=c99 -Wall -pedantic lab8.c 2>&1 | more
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   (END)
   [3]+  Остановлен    gcc -std=c99 -Wall -pedantic lab8.c 2>&1 | more
   localhost:~# ./a.out
   Hello
   ```