x=int(input("Enter a number of second"))
hour=x//3600
minutes=(x%3600) //60
z=x%60
print(str(x)+' second is '+str(hour)+' hour, '+str(minutes)+' minutes, and '+str(z)+' seconds.')