def fibonacci_Seq(number):
    if number <= 1:
        return number
    else:
        return fibonacci_Seq(number - 1) + fibonacci_Seq(number - 2)


my_input = int(input("Enter Your Fibonacci Number: "))
my_fibonacci_list = []

for i in range(my_input):
    my_fibonacci_list.append(fibonacci_Seq(i))

if my_input <= 0:
    print("The Number is Wrong.")
else:
    print(f"Fibonacci Sequence: {my_fibonacci_list}")
