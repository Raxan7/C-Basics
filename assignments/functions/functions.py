def iterate(user):
    array = []
    if user == 0 or user < 0:
        pass
    elif user > 0:
        for i in range(1, (user + 1)):
            if user % i == 0:
                array.append(i)
        print(array)

def main():
    user = int(input("Enter the number"))
    if user != 0 or user > 0:
        iterate(user)
    elif user == 0 or user < 0:
        print("Break out of the loop")
           
        
        

main()