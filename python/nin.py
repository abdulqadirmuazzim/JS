import pygame as pg

pg.init()
time = pg.time.Clock()

scr = pg.display.set_mode((800, 720))
run = True
player = pg.image.load("python/punk/idel/1.png").convert_alpha()
background = pg.image.load("python/back.jpg").convert_alpha()
objs = []


class Obj:
    def __init__(self, img, hei, speed):
        self.speed = speed
        self.image = img
        self.pos = player.get_rect().move(0, hei)

    def move(self):
        self.pos = self.pos.move(self.speed, 0)
        if self.pos == self.pos.move(self.speed, 0):
            self.pos.left = 0


for s in range(10):
    o = Obj(player, s * 40, s)


while run:
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
    for o in objs:
        scr.blit(background, o.pos, o.pos)
    for o in objs:
        o.move()
        scr.blit(o.image, o.pos)
    pg.display.update()
    pg.display.flip()
    t2 = time.tick(60)
