```
To run a command as administrator (user "root"), use "sudo <command>".
See "man sudo_root" for details.

rehcr@rehcr-VirtualBox:~$ who
rehcr    tty2         2023-09-20 18:34 (tty2)
rehcr@rehcr-VirtualBox:~$ pwd
/home/rehcr
rehcr@rehcr-VirtualBox:~$ ls
 snap    Документы   Изображения   Общедоступные   Шаблоны
 Видео   Загрузки    Музыка       'Рабочий стол'
rehcr@rehcr-VirtualBox:~$ cd
rehcr@rehcr-VirtualBox:~$ cd 'Рабочий стол'
rehcr@rehcr-VirtualBox:~/Рабочий стол$ cd
rehcr@rehcr-VirtualBox:~$ cp
cp: пропущен операнд, задающий файл
По команде «cp --help» можно получить дополнительную информацию.
rehcr@rehcr-VirtualBox:~$ cp --help
Использование: cp [ПАРАМЕТР]… [-T] ИСТОЧНИК НАЗНАЧЕНИЕ
       или:    cp [ПАРАМЕТР]… ИСТОЧНИК… КАТАЛОГ
       или:    cp [ПАРАМЕТР]… -t КАТАЛОГ ИСТОЧНИК…
Копирует ИСТОЧНИК в НАЗНАЧЕНИЕ, или несколько ИСТОЧНИКОВ в КАТАЛОГ.

Аргументы, обязательные для длинных параметров, обязательны и для коротких.
  -a, --archive                то же, что и -dPR --preserve=all
      --attributes-only        не копировать данные файла, только атрибуты
      --backup[=КОГДА]         создавать резервную копию каждого целевого
                               файла
  -b                           то же, что и --backup, но без аргумента
      --copy-contents          копировать содержимое специальных файлов при
                               рекурсивной обработке
  -d                           то же, что и --no-dereference --preserve=link
  -f, --force                  если невозможно открыть существующий файл, то
                               удалить его и попробовать ещё раз (этот параметр
                               игнорируется, если также указан параметр -n)
  -i, --interactive            спрашивать перед тем как переписывать
                               (отменяет ранее указанный параметр -n)
  -H                           следовать по символьным ссылкам в ИСТОЧНИКЕ
  -l, --link                   создавать жёсткие ссылки вместо копирования
  -L, --dereference            всегда следовать символьным ссылкам в ИСТОЧНИКЕ
  -n, --no-clobber             не перезаписывать существующий файл (отменяет
                               ранее указанный ключ -i)
  -P, --no-dereference         не следовать по символьным ссылкам в ИСТОЧНИКЕ
  -p                           то же, что и
                               --preserve=mode,ownership,timestamps
      --preserve[=СПИС_АТТР]   сохранять указанные атрибуты (по умолчанию:
                               mode,ownership,timestamps) и, если возможно,
                               дополнительные атрибуты: context, links, xattr,
                               all
      --no-preserve=СПИС_АТТР  не сохранять указанные атрибуты
      --parents                добавить исходный путь к КАТАЛОГУ
  -R, -r, --recursive          рекурсивно копировать каталоги
      --reflink[=КОГДА]        контролировать копии clone/CoW. См. ниже.
      --remove-destination     удалять каждый файл назначения перед
                               попыткой его открыть (обратно к --force)
      --sparse=КОГДА           управлять созданием разреженных файлов.
                               См. ниже.
      --strip-trailing-slashes удалять все конечные косые черты из каждого
                               аргумента ИСТОЧНИК
  -s, --symbolic-link          создавать символьные ссылки вместо копирования
  -S, --suffix=СУФФИКС         использовать для запасных копий заданный
                               СУФФИКС
      --target-directory=КАТ   скопировать все ИСТОЧНИКИ в КАТАЛОГ
  -T, --no-target-directory    считать НАЗНАЧЕНИЕ обычным файлом
  -u, --update                 копировать только тогда когда исходный файл
                               новее чем файл назначения, или когда файл
                               назначения отсутствует
  -v, --verbose                пояснять что будет сделано
  -x, --one-file-system        оставаться в пределах одной файловой системы
  -Z                           установить контекст безопасности SELinux
                               файла назначения равным типу по умолчанию
      --context[=CTX]          подобно -Z, или если указан CTX, то установить
                               контекст безопасности SELinux
                               или SMACK равным CTX
      --help     показать эту справку и выйти
      --version  показать информацию о версии и выйти

По умолчанию, разреженные файлы ИСТОЧНИКА распознаются при помощи грубой
эвристической процедуры и соответственно создаются разреженные НАЗНАЧЕНИЯ.
Такое поведение задаётся при помощи параметр --sparse=auto.
С параметром --sparse=always всегда создаётся разреженный файл НАЗНАЧЕНИЯ, вне
зависимости от того, содержит ли ИСТОЧНИК достаточно длинные
последовательности нулевых байтов. Используйте параметр --sparse=never для
запрещения создания разреженных файлов.

Если указано --reflink[=always], выполняется облегчённое копирование, при
котором блоки данных копируются только при изменении. Если это невозможно,
или если указано --reflink=auto, то используется обычное копирование.
При указании --reflink=never всегда выполняется обычное копирование.

По умолчанию суффикс для запасных копий «~», если только не установлена
переменная окружения SIMPLE_BACKUP_SUFFIX или не задан параметр --suffix.
Способ контроля версий может быть установлен при помощи ключа --backup
или переменной окружения VERSION_CONTROL. Допустимые значения:

  none, off       никогда не создавать резервных копий (даже если
                  указан параметр --backup)
  numbered, t     создавать нумерованные копии
  existing, nil   пронумеровать, если уже существуют пронумерованные
                  резервные копии, иначе создавать простые
  simple. never   всегда создавать простые копии

Как исключение, cp создает резервную копию ИСТОЧНИКА, если заданы
параметры -f и -b, а если ИСТОЧНИК совпадает с НАЗНАЧЕНИЕМ, то cp создает
резервную копию НАЗНАЧЕНИЯ.

Страница справки по GNU coreutils: <https://www.gnu.org/software/coreutils/>
Об ошибках в переводе сообщений сообщайте по адресу <https://translationproject.org/team/ru.html>
Полная документация: <https://www.gnu.org/software/coreutils/cp>
или доступная локально: info '(coreutils) cp invocation'
rehcr@rehcr-VirtualBox:~$ touch report.md
rehcr@rehcr-VirtualBox:~$ mv report.md desk/dz
rehcr@rehcr-VirtualBox:~$ cp report.md desk/dz
cp: не удалось выполнить stat для 'report.md': Нет такого файла или каталога
rehcr@rehcr-VirtualBox:~$ mkdir file
rehcr@rehcr-VirtualBox:~$ cp filee desk/dz/file
cp: не удалось выполнить stat для 'filee': Нет такого файла или каталога
rehcr@rehcr-VirtualBox:~$ cp file desk/dz/file1
cp: не указан -r; пропускается каталог 'file'
rehcr@rehcr-VirtualBox:~$ cp file desk/dz
cp: не указан -r; пропускается каталог 'file'
rehcr@rehcr-VirtualBox:~$ cp -r file desk/dz
rehcr@rehcr-VirtualBox:~/desk/dz$ rm -r file
rehcr@rehcr-VirtualBox:~/desk/dz$ touch text.txt
rehcr@rehcr-VirtualBox:~/desk/dz$ nano text.txt
rehcr@rehcr-VirtualBox:~/desk/dz$ cat text.txt
hello world
rehcr@rehcr-VirtualBox:~/desk/dz$ ps
    PID TTY          TIME CMD
   2517 pts/0    00:00:00 bash
  17856 pts/0    00:00:00 ps
rehcr@rehcr-VirtualBox:~/desk/dz$ nano text.txt
rehcr@rehcr-VirtualBox:~/desk/dz$ tail text.txt
12
13
14
15
16
17
18
19
20

rehcr@rehcr-VirtualBox:~/desk/dz$ tail -n 30 text.txt
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
rehcr@rehcr-VirtualBox:~/desk/dz$ head text.txt
1
2
3
4
5
6
7
8
9
10
rehcr@rehcr-VirtualBox:~$ history
    1  who
    2  git
    3  cd Desktop
    4  status
    5  history
rehcr@rehcr-VirtualBox:~$ echo Linux 
Linux
rehcr@rehcr-VirtualBox:~$ ssh a_pereverzev@185.5.249.140
The authenticity of host '185.5.249.140 (185.5.249.140)' can't be established.
ED25519 key fingerprint is SHA256:gMWpghci4jH+8KckY83J+zLNE4DrwfrDZorZZU2IRGI.
This key is not known by any other names
Are you sure you want to continue connecting (yes/no/[fingerprint])? y
Please type 'yes', 'no' or the fingerprint: yes
Warning: Permanently added '185.5.249.140' (ED25519) to the list of known hosts.
a_pereverzev@185.5.249.140's password: 
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


The programs included with the Ubuntu system are free software;
the exact distribution terms for each program are described in the
individual files in /usr/share/doc/*/copyright.

Ubuntu comes with ABSOLUTELY NO WARRANTY, to the extent permitted by
applicable law.

a_pereverzev@vds2476450:~$ login out
login: Cannot possibly work without effective root
a_pereverzev@vds2476450:~$ quit
Could not find command-not-found database. Run 'sudo apt update' to populate it.
quit: command not found
a_pereverzev@vds2476450:~$ logout
Connection to 185.5.249.140 closed.
rehcr@rehcr-VirtualBox:~$ 
rehcr@rehcr-VirtualBox:~$ ssh-keygen
Generating public/private rsa key pair.
Enter file in which to save the key (/home/rehcr/.ssh/id_rsa): 
Enter passphrase (empty for no passphrase): 
Enter same passphrase again: 
Your identification has been saved in /home/rehcr/.ssh/id_rsa
Your public key has been saved in /home/rehcr/.ssh/id_rsa.pub
The key fingerprint is:
SHA256:S4eqacrGjGzTBruz7ZOOmc6ekpVKLcELECecxt7PEQ8 rehcr@rehcr-VirtualBox
The key's randomart image is:
+---[RSA 3072]----+
|=.o              |
|.B   E           |
|= .   +          |
|.+ . . . .       |
|. +.o . S .      |
| =o. o o o       |
|oB= . . .        |
|*BX=.o           |
|=%@*+            |
+----[SHA256]-----+
rehcr@rehcr-VirtualBox:~$ ssh-copy-id a_pereverzev@185.5.249.140 
/usr/bin/ssh-copy-id: INFO: attempting to log in with the new key(s), to filter out any that are already installed
/usr/bin/ssh-copy-id: INFO: 1 key(s) remain to be installed -- if you are prompted now it is to install the new keys
a_pereverzev@185.5.249.140's password: 

Number of key(s) added: 1

Now try logging into the machine, with:   "ssh 'a_pereverzev@185.5.249.140'"
and check to make sure that only the key(s) you wanted were added.

rehcr@rehcr-VirtualBox:~$ ssh 'a_pereverzev@185.5.249.140'
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Wed Sep 20 21:58:07 2023 from 109.252.94.196
a_pereverzev@vds2476450:~$ logout
Connection to 185.5.249.140 closed.
To run a command as administrator (user "root"), use "sudo <command>".
See "man sudo_root" for details.

rehcr@rehcr-VirtualBox:~/desk/dz$ ssh 'a_pereverzev@185.5.249.140'
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Wed Sep 20 22:52:37 2023 from 109.252.94.196
a_pereverzev@vds2476450:~$ mkdir directory
a_pereverzev@vds2476450:~$ logout
Connection to 185.5.249.140 closed.
rehcr@rehcr-VirtualBox:~/desk/dz$ scp list.tar root@185.5.249.140:/directory
root@185.5.249.140's password: 
Permission denied, please try again.
root@185.5.249.140's password: 
Connection closed by 185.5.249.140 port 22
lost connection
rehcr@rehcr-VirtualBox:~/desk/dz$ scp list.tar root@185.5.249.140:/directory
root@185.5.249.140's password: 
Permission denied, please try again.
root@185.5.249.140's password: 
Permission denied, please try again.
root@185.5.249.140's password: 
root@185.5.249.140: Permission denied (publickey,password).
lost connection
rehcr@rehcr-VirtualBox:~/desk/dz$ scp list.tar a_pereverzev@185.5.249.140:/directory
rehcr@rehcr-VirtualBox:~/desk/dz$ ssh 'a_pereverzev@185.5.249.140'
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Thu Sep 21 20:36:09 2023 from 109.252.94.196
a_pereverzev@vds2476450:~$ status
Could not find command-not-found database. Run 'sudo apt update' to populate it.
status: command not found
a_pereverzev@vds2476450:~$ cd directory
a_pereverzev@vds2476450:~/directory$ client_loop: send disconnect: Broken pipe
rehcr@rehcr-VirtualBox:~/desk/dz$ scp list.tar a_pereverzev@185.5.249.140
rehcr@rehcr-VirtualBox:~/desk/dz$ scp list.tar a_pereverzev@185.5.249.140:/directory
scp: /directory: Permission denied
rehcr@rehcr-VirtualBox:~/desk/dz$ scp list.tar a_pereverzev@185.5.249.140:directory
list.tar                                                       100%   20KB 616.3KB/s   00:00    
rehcr@rehcr-VirtualBox:~/desk/dz$ ssh 'a_pereverzev@185.5.249.140'
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Thu Sep 21 20:43:19 2023 from 109.252.94.196
a_pereverzev@vds2476450:~$ cd directory
a_pereverzev@vds2476450:~/directory$ tar -xvf list.tar
report.md
a_pereverzev@vds2476450:~/directory$ scp a_pereverzev@185.5.249.140:/report.md /desk/dz
The authenticity of host '185.5.249.140 (185.5.249.140)' can't be established.
ECDSA key fingerprint is SHA256:HaVGMUF4Ylk978WKR4oBPYEWkv+fd86Gg9Yqcwnu3Z4.
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes
Warning: Permanently added '185.5.249.140' (ECDSA) to the list of known hosts.
a_pereverzev@185.5.249.140's password: 
scp: /report.md: No such file or directory
a_pereverzev@vds2476450:~/directory$ ls
list.tar  report.md
a_pereverzev@vds2476450:~/directory$ scp a_pereverzev@185.5.249.140:report.md /desk/dz
a_pereverzev@185.5.249.140's password: 
Permission denied, please try again.
a_pereverzev@185.5.249.140's password: 
scp: report.md: No such file or directory
a_pereverzev@vds2476450:~/directory$ client_loop: send disconnect: Broken pipe
rehcr@rehcr-VirtualBox:~/desk/dz$ ssh 'a_pereverzev@185.5.249.140'
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Thu Sep 21 20:53:19 2023 from 109.252.94.196
a_pereverzev@vds2476450:~$ scp a_pereverzev@185.5.249.140:directory/report.md /desk/dz
a_pereverzev@185.5.249.140's password: 
/desk/dz: No such file or directory
a_pereverzev@vds2476450:~$ ls
directory
a_pereverzev@vds2476450:~$ cd directory
a_pereverzev@vds2476450:~/directory$ ls
list.tar  report.md
a_pereverzev@vds2476450:~/directory$ scp a_pereverzev@185.5.249.140:report.md /desk/dz
a_pereverzev@185.5.249.140's password: 
scp: report.md: No such file or directory
a_pereverzev@vds2476450:~/directory$ nano report.md
a_pereverzev@vds2476450:~/directory$ scp a_pereverzev@185.5.249.140:list.tar /desk/dz
a_pereverzev@185.5.249.140's password: 
scp: list.tar: No such file or directory
a_pereverzev@vds2476450:~/directory$ scp a_pereverzev@185.5.249.140:/report.md /desk/dz
a_pereverzev@185.5.249.140's password: 
scp: /report.md: No such file or directory
a_pereverzev@vds2476450:~/directory$ scp a_pereverzev@vds2476450:/report.md /desk/dz
The authenticity of host 'vds2476450 (185.5.249.140)' can't be established.
ECDSA key fingerprint is SHA256:HaVGMUF4Ylk978WKR4oBPYEWkv+fd86Gg9Yqcwnu3Z4.
Are you sure you want to continue connecting (yes/no/[fingerprint])? yrs
Please type 'yes', 'no' or the fingerprint: yes
Warning: Permanently added 'vds2476450' (ECDSA) to the list of known hosts.
a_pereverzev@vds2476450's password: 
scp: /report.md: No such file or directory
a_pereverzev@vds2476450:~/directory$ nano report.md
a_pereverzev@vds2476450:~/directory$ pwd
/home/a_pereverzev/directory
a_pereverzev@vds2476450:~/directory$ ip -c addr
1: lo: <LOOPBACK,UP,LOWER_UP> mtu 65536 qdisc noqueue state UNKNOWN group default qlen 1000
    link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
    inet 127.0.0.1/8 scope host lo
       valid_lft forever preferred_lft forever
    inet6 ::1/128 scope host 
       valid_lft forever preferred_lft forever
2: ens3: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc fq_codel state UP group default qlen 1000
    link/ether 52:54:00:e0:23:ad brd ff:ff:ff:ff:ff:ff
    inet 185.5.249.140/22 brd 185.5.251.255 scope global ens3
       valid_lft forever preferred_lft forever
    inet6 fe80::5054:ff:fee0:23ad/64 scope link 
       valid_lft forever preferred_lft forever
a_pereverzev@vds2476450:~/directory$ scp /home/a_pereverzev/directory
usage: scp [-346BCpqrTv] [-c cipher] [-F ssh_config] [-i identity_file]
            [-J destination] [-l limit] [-o ssh_option] [-P port]
            [-S program] source ... target
a_pereverzev@vds2476450:~/directory$ scp a_pereverzev@185.5.249.140:/home/a_pereverzev/directory/report.md /desk/dz
a_pereverzev@185.5.249.140's password: 
/desk/dz: No such file or directory
a_pereverzev@vds2476450:~/directory$ scp a_pereverzev@185.5.249.140:/home/a_pereverzev/directory/report.md ~
a_pereverzev@185.5.249.140's password: 
Permission denied, please try again.
a_pereverzev@185.5.249.140's password: 
report.md      
```
