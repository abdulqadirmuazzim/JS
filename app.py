import subprocess as sub

com = sub.run(["node", "test"], stderr=True)
if com.returncode == 1:
    get = sub.run(["g++", "new.c"])
else:
    print("Success, alhamdulillah")
