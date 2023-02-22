import pyautogui
import time

#Give the python file some time before continuing
#time.sleep(3)
#Mouse function
#print(pyautogui.size()) #prints the resoultion of your screen
#print(pyautogui.position())
#Moves the mouse over the time 3sec
#pyautogui.moveTo(100,100,3)
#Move mouse relative
#pyautogui.moveRel(100,100,3)
#Click
#pyautogui.click(100,100,3,3, button="left")
#pyautogui.rightClick()
#pyautogui.leftClick()
#pyautogui.tripleClick()
#pyautogui.scroll(500)
#pyautogui.scroll(-500)
#Mouse up and down
#pyautogui.mouseUp(100,100,button="left")
#pyautogui.mouseDown(100,100,button="left")
#Example of mouse up and down
#pyautogui.mouseDown(300,400,button="left")
#pyautogui.moveTo(800,400, button="left")
#time.sleep(3)
#pyautogui.mouseUp()
#pyautogui.moveTo(1000,400,3)
#Spiral using pyautogui
#time.sleep(1)
#distance = 300
#while distance > 0:
    #pyautogui.dragRel(distance,0,1,button="left")
    #distance = distance - 10
    #pyautogui.dragRel(0,distance,1, button="left")
    #pyautogui.dragRel(-distance,0,1,button="left")
    #distance = distance - 20
    #pyautogui.dragRel(0,-distance,1,button="left")
    #time.sleep(4)
#tiktok Liker - example
#time.sleep(3)
#for i in range(10):
    #pyautogui.moveTo(450,500)
    #time.sleep(2)
    #pyautogui.doubleClick()
    #time.sleep(2)
    #pyautogui.moveTo(854,515)
    #time.sleep(1)
    #pyautogui.leftClick()
#--------------------------
#keyboard functions
#pyautogui.write("hello")
#pyautogui.press("enter")
#pyautogui.press("space")

#Dino_Game
time.sleep(3)
#for i in range(20):
#    pyautogui.press("space")
#    time.sleep(3)
#screenshooting
pyautogui.screenshot("screenshot.png")
