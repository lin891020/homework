def reverse_integer(x):
    """
    Reverses the digits of an integer.

    Arguments:
        x (int): The integer to be reversed.

    Returns:
        int: The reversed integer.
    """
    reversed_num = 0
    is_negative = x < 0
    x = abs(x)  

    while x != 0:
        digit = x % 10  
        reversed_num = reversed_num * 10 + digit  
        x //= 10 

    return -reversed_num if is_negative else reversed_num

print(reverse_integer(135))
print(reverse_integer(-246))
print(reverse_integer(0))
print(reverse_integer(-0))
print(reverse_integer(-89-89))
print(reverse_integer(12345678901234567890))
