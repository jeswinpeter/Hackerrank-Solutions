from collections import OrderedDict

print("Enter number of inputs: ")
no_of_customers = int(input())

dictionary = OrderedDict()

print("enter {no_of_customers} inputs: ")
for x in range(no_of_customers):
    string = input().rsplit(' ',1)

    if(string[0] in dictionary):
        dictionary[string[0]] += int(string[1]) 
    else:
        dictionary[string[0]] = int(string[1])
    
for key,value in dictionary.items():
    print(f"{key} {value}")
