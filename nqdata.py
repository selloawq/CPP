import requests

# replace the "demo" apikey below with your own key from https://www.alphavantage.co/support/#api-key
url = 'https://www.alphavantage.co/query?function=REAL_GDP&interval=monthly&apikey=RLFBR6XEIUT9SW3A'
r = requests.get(url)
data = r.json()

print(data)