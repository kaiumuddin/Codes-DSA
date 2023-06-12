import sys

print(sys.executable)
print(sys.platform)
print(sys.argv)
print(sys.version_info)
print(sys.version)
print(sys.getsizeof(1))
print(sys.getsizeof(42))
print(sys.getsizeof(1.0))
print(sys.getsizeof(""))
print(sys.getsizeof("a"))
print(sys.getsizeof("ab"))
print(sys.getsizeof("abcdefghij"))


def main():
    print("hello")
    print("world")


if __name__ == "__main__":
    main()

sys.stdout.write("Karma")
sys.stdout.write("Karma")

print("\nhello", "world", end=" ", sep=",")



