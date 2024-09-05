#Defining a function binary search
#And passing in 2 args
def binary_search(list,item):

    #checking the lowest part the array
    low = 0

    # checking the high part of the array
    high = len(list) - 1 


    while low <= high :

        #Then we cross to the middle part
        mid = (low + high) // 2 # The mid variable is  
                                #being rounded down automatically
                                # if (low + high) isn't even

        guess = list[mid]

        if guess  == item: # Meaning we got the item
            return mid

        if guess > item:  #Meaning the  guess was high
            high = mid - 1


        else: #Meaning the guess was low
            low = mid + 1

    return None

my_list = [1,3,5,7,9]

print(binary_search(my_list, 3))
print(binary_search(my_list, -1))
print(binary_search(my_list, 7)) # This should return 3