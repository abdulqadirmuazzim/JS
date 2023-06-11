# Bismillah
from selenium import webdriver as web
from selenium.webdriver.common.by import By
import time


get = web.Chrome()

oo = get.get("file:///C:/Users/King_Abdul/js/index.html")

get.find_element(By.ID, "wen").click()
li = ["Readings", "Studying", "movie break", "Prayer", "resting"]
for a in li:
    fin = get.find_element(By.ID, "wen")
    get.fullscreen_window()
    fin.send_keys(a)
    fin.submit()

get.fullscreen_window()
# time.sleep(10)
