text = "abs" "asd"
print(text)

text = """first
second
third"""

print(text)

print(len(text))

title = "This is a title"
print(title)
print("-" * len(title))

name = "kaiumuddin"
start = 4
end = 10
print(name[start:end])

rename = name[:4] + "n" + name[5:]
print(rename)

str1 = "Naju"
str2 = str1
str2 = "Sona"
print(str1, str2)

text = "The black cat climbed the green tree"
print(text.index("cat"))
# print(text.index("casda"))  # error message
print(text.index("The black cat"))
print(text.rindex("green", 10))  # start index
print(text.rindex("green", 10, 32))  # start, end index

print(text.find("black"))  # 4
print(text.find("dog"))  # 4
print(text.find("black", 0, 23))  # 4


txt = "hello world"
if "wo" in txt:
    print("Ace")


print(ord("a"))  # 97
print(ord("A"))  # 65
print(ord("="))

print("-" * 20)

for i in range(32, 126):
    print(i, "=", chr(i))
