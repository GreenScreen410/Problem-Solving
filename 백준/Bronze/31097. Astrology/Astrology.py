YYYY, MM, DD = map(int, input().split("-"))

if (MM == 1 and DD >= 20) or (MM == 2 and DD <= 18):
    print("Aquarius")
elif (MM == 2 and DD >= 19) or (MM == 3 and DD <= 20):
    print("Pisces")
elif (MM == 3 and DD >= 21) or (MM == 4 and DD <= 19):
    print("Aries")
elif (MM == 4 and DD >= 20) or (MM == 5 and DD <= 20):
    print("Taurus")
elif (MM == 5 and DD >= 21) or (MM == 6 and DD <= 20):
    print("Gemini")
elif (MM == 6 and DD >= 21) or (MM == 7 and DD <= 22):
    print("Cancer")
elif (MM == 7 and DD >= 23) or (MM == 8 and DD <= 22):
    print("Leo")
elif (MM == 8 and DD >= 23) or (MM == 9 and DD <= 22):
    print("Virgo")
elif (MM == 9 and DD >= 23) or (MM == 10 and DD <= 22):
    print("Libra")
elif (MM == 10 and DD >= 23) or (MM == 11 and DD <= 22):
    print("Scorpio")
elif (MM == 11 and DD >= 23) or (MM == 12 and DD <= 21):
    print("Sagittarius")
else:
    print("Capricorn")