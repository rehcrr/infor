```
00, ,<,mov_1

# переход к началу 2 числа
mov_1,1,<,mov_1  mov_1,0,<,mov_1  mov_1, ,>,test_0


# проверка разряда 2 числа
test_0,0, ,mov_2  test_0,1,1,shift test_0, , ,move_forward_whspace3
mov_2, ,>,movee2.1

movee2.1,1, ,movee2.2.1    movee2.1,0, ,movee2.2.0    movee2.1, ,<,mov_1.1
movee2.2.1, ,<,movee2.3.1  movee2.2.0, ,<,movee2.3.0
movee2.3.1, ,1,movee2.4.1  movee2.3.0, ,0,movee2.4.0
movee2.4.1,1,>,movee2.5    movee2.4.0,0,>,movee2.5
movee2.5, ,>,movee2.1
mov_1.1, ,<,mov_1


shift,1, ,shift shift,0, ,shift
shift, ,>,move2.1
move2.1,1, ,move2.2.1  move2.1,0, ,move2.2.0 move2.1, ,<,rev
move2.2.1, ,<,move2.3.1  move2.2.0, ,<,move2.3.0
move2.3.1, ,1,move2.4.1  move2.3.0, ,0,move2.4.0
move2.4.1,1,>,move2.5  move2.4.0,0,>,move2.5
move2.5, ,>,move2.1
rev, ,<,rev1 rev,1,<,rev1 rev,0,<,rev1
rev1,1,<,rev1 rev1,0,<,rev1 rev1, ,<,gap


# переход к 1 числу
gap, ,<,gap   gap,0, ,change_run   gap,1, ,change_run

 
# сдвиг 1 числа
change_run, ,<,change_copy
            
change_copy,1, ,change_copy_1.1       
change_copy_1.1, ,>,change_copy_1.2
change_copy_1.2, ,1,change_copy_1.3
change_copy_1.3,1,<,change_run  

change_copy,0, ,change_copy_0.1
change_copy_0.1, ,>,change_copy_0.2
change_copy_0.2, ,0,change_copy_0.3
change_copy_0.3,0,<,change_run

change_copy, ,>,whspace
whspace, ,>,copy

copy,1,<,copy_1
copy_1, ,1,move_forward_num

copy,0,<,copy_0
copy_0, ,0,move_forward_num

# переход к 2 числу
move_forward_num,0,>,move_forward_num
move_forward_num,1,>,move_forward_num
move_forward_num, , ,move_forward_whspace

move_forward_whspace, ,>,move_forward_whspace1
move_forward_whspace1, ,>,move_forward_whspace2
move_forward_whspace2, ,<,move_forward_whspace3
move_forward_whspace3, ,<,move_forward_whspace4
move_forward_whspace4, ,#,move_forward_whspace4
move_forward_whspace1,1,1,shift
move_forward_whspace1,0,0,shift
```