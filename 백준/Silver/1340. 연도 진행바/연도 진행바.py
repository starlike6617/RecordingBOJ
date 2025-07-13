import datetime

date = input().strip()
parts = date.split()

months = {
    "January": 1,
    "February": 2,
    "March": 3,
    "April": 4,
    "May": 5,
    "June": 6,
    "July": 7,
    "August": 8,
    "September": 9,
    "October": 10,
    "November": 11,
    "December": 12,
}

month = months[parts[0]]
day = int(parts[1][:2])
year = int(parts[2])
time = parts[3].split(":")
hour = int(time[0])
minute = int(time[1])


total_days = 366 if ((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)) else 365
total_minutes = total_days * 24 * 60

current = datetime.datetime(year, month, day, hour, minute)
start = datetime.datetime(year, 1, 1, 0, 0)

elapsed_minutes = (current - start).total_seconds() / 60
percentage = (elapsed_minutes / total_minutes) * 100

print(percentage)
