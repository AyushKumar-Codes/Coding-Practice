import requests
from bs4 import BeautifulSoup
import re
page = requests.get('https://books.toscrape.com/')
sp = BeautifulSoup(page.content, 'html.parser')
content = sp.find_all(class_='product_pod')
content = str(content)
print(content)
regex_titles = r'title="(.*?)">' # .* is used for there will be any length word  and ? means we are searching limited
regex_prices = '£(.*?)</p>'
titlesList = re.findall(regex_titles, content)
priceList = re.findall(regex_prices, content)
f=open("dataExtracted.txt", "w")
for title, price in zip(titlesList, priceList):
    f.write(title + "\t" + price + "\n")
f=open("dataExtracted.txt", "r")
lines = f.readlines()
print(lines)