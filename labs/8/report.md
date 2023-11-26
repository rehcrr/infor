# Отчет по лабораторной работе № 8
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Переверзев Александр Олегович

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Системы программирования на языке С
2. **Цель работы**: Изучение конкретной системы программирования на Си и получение навыков подготовки текстов и отладка программ. 
3. **Задание**:
4. **Идея, метод, алгоритм решения задачи**: изучить и освоить возможности C по содержащейся в практикуме документации и другим источникам,
   в том числе основные этапы процесса компиляции и подготовки программ к выполнению. Составить и отладить простейшую программу на Си и в терминальном классе. Изучить различные системы программирования Cи на других платформах:
   Gnu, MS VS...
6. **Сценарий выполнения работы**:
   1. Запустили редактор текстов с помощью команды emacs 
   2. Компилируем программу с помощью cc
   3. При необходимости видеть ошибки, используем  gcc -std=c99 -Wall -pedantic lab8.c 2>&1 | more
   4. ели нет ошибок, используем a.out
7. **Протокол**:
```
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
9. **Замечания автора**: -
10. **Выводы**: я успешно освоил работу с языком программирования C и углубился в его особенности. Теперь у нас есть базовые навыки написания простых алгоритмов на Си. Мы также осознали важность использования редактора Emacs в сравнении с другими инструментами, доступными в Unix-подобных системах.