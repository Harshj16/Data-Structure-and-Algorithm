#Array Data Structure
#Array is the base of DSA
#creating an predefined array
Array = ["Apple" , "Banana" , "orange"]

#printing all elements of array
for i in Array:
    print(i)
#printing specific element of the Array
print("Specific element of Array[0] "+Array[0])#Accessing array with index number

#Adding element in the Array
Array.append("Mango")#Append adds the element after the last index
print(Array)

#Copying the elements of list
copy_arr = Array.copy()
print(copy_arr)

#Removing the element from Array
Array.remove("Mango")#Removing Element by Name
print(Array)

#Removing the element by index number
Array.pop(1)#poping elemenent by index number
print(Array)

#Clearing the elements in Array
Array.clear()
print(Array)

#Counting the how much times an array elements is repeated
print(copy_arr)
print(copy_arr.count("Mango"))

#Extending the Array with other Array
extend_arr = ["Watermelon" , "Avacardo"]
copy_arr.extend(extend_arr)
print(copy_arr)

#We can also reverse the list
copy_arr.reverse()
print(copy_arr)

#Creating user defined Array
user_arr = []#creating empty array
for iteration in range(1,6):
    iteration  = input("Enter the names of color = ") #taking elemnent from user
    user_arr.append(iteration)#appending the input in array
print(user_arr)

