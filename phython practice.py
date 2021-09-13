'''x=int(input("enter the first number "))
y=int(input("enter the second number "))
power_of_x=x**y
print(power_of_x)
street=input("enter the street ")
country=input("enter the country ")
state=input("enter the state ")
address= street+"\n"+country+"\n"+state
print(address)


var="earth revolves around sun"
print(var[5:14])
print(var[-4:])


v=10
s=20
print(f"I eat {v} vegetables and {s} fruits")
v='maine 200 banana khaye'
v=v.replace('200','10').replace("banana","samose")
print(v)


jan=2020
feb=2504
mar=4506
april=4503
may=7542
months=[jan,feb,mar,april,may]
exp=months[1]-months[0]
print(exp)
total_exp=months[0]+months[1]+months[2]
print(total_exp)
v=2020 in months
print(v)
june=4580
months.append(june)
print(months)
months[3]=months[3]-200
print(months)

city1=input("enter the city name to check the country : ")
city2=input("enter the second city ")
indian=["mumbai","banglore","chennai","delhi"];
pakistan=["lahore","karachi","islamabad"];
bangladesh=["dhaka","khulna","rangpur"];
if city1 in indian:
    print("INDIA")
elif city1 in pakistan:
    print("PAKISTAN")
elif city1 in bangladesh:
    print("BANGLADESH")
else:
    print("entered city is not in the current list!!!")

    
if city1 in indian and city2 in indian or city1 in pakistan and city2 in pakistan or city1 in bangladesh and city2 in bangladesh:
    print("both cities you entered is in same country")
else:
    print("both cities are not in same country !!!!!")


user=input("enter the sugar level to check wether its normal,high or low")
user=int(user)
if user>100:
    print("high sugar level ")
elif user<80 and user<100:
    print("low sugar level")
else:
    print("noraml sugar level")   


exp=[10,20,30,70,45]
total=0
for item in exp:
   total=total+item
print(total)
print(len(exp))

l=[50,60,45,87,630,45]
total=0
for i in range(0,len(l)):
    total=total+l[i]
print("total expenses is :",total)


key_locations="chair"
locations=["garden","dining table","chair","scooty"]
for i in range(len(locations)):
    if key_locations==locations[i]:
        print("key found in ",i)
        break

    else:
        print("key not found in ",i)

multiplicants=[2,2,3,5,6]
prod=1
for mult in multiplicants:
    prod=prod*mult
print(prod)'''

v="graphic era deemed to be university"
print(v.upper())