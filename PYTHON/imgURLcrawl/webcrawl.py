from selenium import webdriver
from selenium.webdriver.common.by import By
from urllib import request

# pip install chromedriver-autoinstaller 
import chromedriver_autoinstaller
chromedriver_autoinstaller.install()


class Webtoon_Thumbnail():
    def __init__(self) -> None:
        self.driver = webdriver.Chrome()
        self.driver.implicitly_wait(5)
        self.driver.set_window_size(1920,1280)
        self.driver.get('https://comic.naver.com/genre/bestChallenge')
        

    #URL을 가져와 배열에 저장하는 함수
    #i는 가져올 배열을 집은 매개변수
    def reURL(self, i):
        for num in range(24):
                
            se = '//div[@class="fl"]/a/img'
                
            we = self.driver.find_elements(By.XPATH,se)[num]
            print(we.text)

            image_url = we.get_attribute('src')
            i.append(image_url)

        return -1

    #한 페이지에서 검색해서 없으면 txt에 추가하는 함수
    def storeONEpage(self):
        path = "이미지URL저장.txt"
        lines = []
        # 읽어오기
        if os.path.exists(path):    # 경로에 파일 유무 검사
            with open(path, 'r') as f:
                lines = f.readlines()

        # 추가하기
        with open(path, 'a') as f:    # 있으면 추가 , 없으면 생성
            image_url = []   
            self.reURL(image_url)

            for i in range(len(image_url)):
                if image_url[i]+'\n' not in lines:
                    data = f"{image_url[i]}\n"
                    f.write(data)



wt = Webtoon_Thumbnail()
wt.storeONEpage()




input()
driver.quit()