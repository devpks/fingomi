import serial
import requests

try:
    uno = serial.Serial("/dev/ttyS3",timeout=1)
except:
    print('Port error')
while True:
   uno.timeout=0.01

   if "Bangkok City" in uno.readline().decode():
       print("Flying to Bangkok")
       requests.get('http://localhost:5430/kml/flyto/100.501762/13.756331/58000')
   elif "London City" in uno.readline().decode():
       print("Flying to London")
       requests.get('http://localhost:5430/kml/flyto/-0.127758/51.507351/37000')
   elif "Paris City" in uno.readline().decode():
       print("Flying to Paris | Fasten your seat belt")
       requests.get('http://localhost:5430/kml/flyto/2.2137/46.2276/34220')
   elif "Jakarta City" in uno.readline().decode():
       print("Flying to Jakarta | Fasten your seat belt")
       requests.get('http://localhost:5430/kml/flyto/106.8456/-6.2088/103290')
   elif "Dhaka City" in uno.readline().decode():
       print("Flying to Dhaka | Holld your Grip!")
       requests.get('http://localhost:5430/kml/flyto/90.4125/23.8103/47570')
