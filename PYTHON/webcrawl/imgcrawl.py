from selenium import webdriver
from selenium.webdriver.common.by import By
from urllib import request

# pip install chromedriver-autoinstaller 
import chromedriver_autoinstaller
chromedriver_autoinstaller.install()

driver = webdriver.Chrome()

driver.implicitly_wait(5)

driver.set_window_size(1920,1280)

keyword = '코로나'
# 1.긁으려는 페이지
driver.get('https://www.kraftheinzkorea.co.kr/BrandStory/HeinzKetchup')

def store():
    # 긁고자 하는 페이지 부분 xpath
    se = '//img'
    we = driver.find_elements(By.XPATH,se)

    #다운 받을 이미지 개수
    num = len(we)
    for i in range(num):
        wer = we[i]
        image_url = wer.get_attribute('src')
        name = image_url.split('/')[-1]
        request.urlretrieve(image_url, 'C:/Users/oculo/Desktop/test/PYTHON/imgcrawl/img/'+f'{name}.jpg')



## 실행 ##
store()

input()
driver.quit()