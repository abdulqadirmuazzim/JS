scr = [0, 0, 0, 0, 0]
back = [0, 0, 0, 0, 0]

pos = len(scr) - 1
for i in range(len(scr)):
    scr[pos] = 2
    print("screen= ", scr)
    scr[pos] = back[pos]

    pos -= 1
