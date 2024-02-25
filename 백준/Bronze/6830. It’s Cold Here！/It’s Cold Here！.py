coldest = ""
compare = 200

while True:
    city, temperature = input().split()
    temperature = int(temperature)
    if city == "Waterloo":
        print(coldest)
        break
    
    if compare > temperature:
        coldest = city
        compare = temperature