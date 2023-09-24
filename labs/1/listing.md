```
Kitten@Helg-▒▒ MINGW64 ~ (master)
$ cd Desktop

Kitten@Helg-▒▒ MINGW64 ~/Desktop (master)
$ git clone https://github.com/rehcrr/infor.git
Cloning into 'infor'...
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0
Receiving objects: 100% (3/3), done.

Kitten@Helg-▒▒ MINGW64 ~/Desktop (master)
$ cd infor

Kitten@Helg-▒▒ MINGW64 ~/Desktop/infor (main)
$ git add .

Kitten@Helg-▒▒ MINGW64 ~/Desktop/infor (main)
$ git status
On branch main
Your branch is up to date with 'origin/main'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        new file:   labs/1/listing.md
        new file:   labs/1/report.md
        new file:   labs/2/zero.txt
        new file:   labs/3/zero.txt
        new file:   labs/4/zero.txt


Kitten@Helg-▒▒ MINGW64 ~/Desktop/infor (main)
$ cd labs

Kitten@Helg-▒▒ MINGW64 ~/Desktop/infor/labs (main)
$ cd 1

Kitten@Helg-▒▒ MINGW64 ~/Desktop/infor/labs/1 (main)
$ git branch lab_1

Kitten@Helg-▒▒ MINGW64 ~/Desktop/infor/labs/1 (main)
$ git log
commit 91c0d0c36fd8f0e6ea6f9a7f472c78a6801889d2 (HEAD -> main, origin/main, origin/HEAD, lab_1)
Author: rehcrr <144657239+rehcrr@users.noreply.github.com>
Date:   Thu Sep 14 21:20:09 2023 +0300

Initial commit

Kitten@Helg-▒▒ MINGW64 ~/Desktop/infor/labs/1 (main)
$ git commit -m 'lab1'
[main 4415087] lab1
5 files changed, 141 insertions(+)
create mode 100644 labs/1/listing.md
create mode 100644 labs/1/report.md
create mode 100644 labs/2/zero.txt
create mode 100644 labs/3/zero.txt
create mode 100644 labs/4/zero.txt

Kitten@Helg-▒▒ MINGW64 ~/Desktop/infor/labs/1 (main)
$ cd

Kitten@Helg-▒▒ MINGW64 ~ (master)
$ cd Desktop

Kitten@Helg-▒▒ MINGW64 ~/Desktop (master)
$ cd infor

Kitten@Helg-▒▒ MINGW64 ~/Desktop/infor (main)
$ git merge lab_1
Already up to date.

Kitten@Helg-▒▒ MINGW64 ~/Desktop/infor (main)
$ git push origin main
Enumerating objects: 9, done.
Counting objects: 100% (9/9), done.
Delta compression using up to 4 threads
Compressing objects: 100% (6/6), done.
Writing objects: 100% (8/8), 1.96 KiB | 669.00 KiB/s, done.
Total 8 (delta 0), reused 0 (delta 0), pack-reused 0
To https://github.com/rehcrr/infor.git
   91c0d0c..4415087  main -> main
```