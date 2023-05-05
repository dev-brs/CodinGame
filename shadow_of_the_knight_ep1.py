import sys
import math

def calcular_posicao(dir):
    global max_x, max_y, min_x, min_y, current_x, current_y
    if(dir=='U'):
        max_y=current_y
        current_y=(current_y+min_y)//2
    if(dir=='D'):
        min_y=current_y
        current_y=(current_y+max_y)//2
    if(dir=='L'):
        max_x=current_x
        current_x=(current_x+min_x)//2
    if(dir=='R'):
        min_x=current_x
        current_x=(current_x+max_x)//2

x_total,y_total = [int(i) for i in input().split()]
n = int(input())#maximum number of turns before game over.
x0, y0 = [int(i) for i in input().split()]
max_x=x_total
max_y=y_total
min_x=0
min_y=0
current_x=x0
current_y=y0
# game loop
while True:
    bomb_dir = input()  # the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
    if(len(bomb_dir)==2):
        if(bomb_dir[0]=='U'):calcular_posicao(bomb_dir[0])
        else:calcular_posicao(bomb_dir[0])
        if(bomb_dir[1]=='L'):calcular_posicao(bomb_dir[1])
        else:calcular_posicao(bomb_dir[1])
    else:
        if(bomb_dir=='U'):calcular_posicao(bomb_dir)
        if(bomb_dir=='D'):calcular_posicao(bomb_dir)
        if(bomb_dir=='L'):calcular_posicao(bomb_dir)
        if(bomb_dir=='R'):calcular_posicao(bomb_dir)
    print(current_x,current_y)