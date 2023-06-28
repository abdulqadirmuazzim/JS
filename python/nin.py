import pygame as pg

pg.init()
time = pg.time.Clock()

scr = pg.display.set_mode((1240, 620))
run = True
player = pg.image.load("python/punk/idel/1.png").convert()
background = pg.image.load("python/back.jpg").convert()
objs = []


def size(img, scale, x, y):
    w = img.get_width()
    h = img.get_height()
    obj = pg.transform.scale(img, (w * scale, h * scale))
    scr.blit(obj, (x, y))


right = False
left = False
x = 200
y = 220

a = 0
b = 0
while run:
    scr.fill("black")
    # draw objects on screen.
    size(background, 0.2, a, b)
    size(player, 2, x, y)

    # if right == True:
    #     x += 2
    # if left == True:
    #     x -= 2

    # events
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
    # keys input from user.
    keys = pg.key.get_pressed()
    if keys[pg.K_RIGHT] or keys[pg.K_4]:
        x += 3
    if keys[pg.K_LEFT] or keys[pg.K_6]:
        x -= 3
    if keys[pg.K_UP] or keys[pg.K_8]:
        y -= 3
    if keys[pg.K_DOWN] or keys[pg.K_5]:
        y += 3

    time.tick(200)

    pg.display.update()
