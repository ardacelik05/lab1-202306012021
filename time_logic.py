total_seconds = int(input("Enter total seconds: "))

print( str(total_seconds) + " seconds is " + str(total_seconds//3600) + " hours, " + str((total_seconds%3600)//60) + " minutes, and " + str(total_seconds%60) + " seconds")