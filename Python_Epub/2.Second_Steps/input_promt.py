def main():
    # name = input("your name: ")
    # print(name)

    # a = input()
    # b = input()
    # print(int(a) + int(b))

    # a = input()
    # b = input()
    # print(float(a) + float(b))

    val = input("Type a number : ")
    print(val)
    print(val.isdecimal())
    print(val.isnumeric())

    if val.isdecimal():
        num = int(val)
        print("Decimal", num)
    else:
        print("Numerical", val)


main()
