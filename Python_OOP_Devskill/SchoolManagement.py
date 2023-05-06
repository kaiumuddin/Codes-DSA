from abc import ABC, abstractmethod

# Abstract class cannot have object
class School(ABC):
    @abstractmethod  # decorator: abstract class er method er age add krte hy
    def rules(self):
        pass

    @abstractmethod  # decorator: abstract class er method er age add krte hy
    def noticeBoard(self):
        pass


class Student(School):
    def __init__(self, name):
        self._name = name
        print("Object created from -->", self.__class__.__name__)

    def bookList(self, books):
        print(books)

    def studentInfo(self, name, age, grade):
        self.name = name
        self.age = age
        self.grade = grade

    def rules(self):
        print("rules : Student")

    def noticeBoard(self):
        print("notice : Student")


class Teacher(School):
    def __init__(self, name, subject):
        self.name = name
        self.subject = subject
        print("Object created from -->", self.__class__.__name__)

    def teacherInfo(self, address, salary):
        self.address = address
        self.salary = salary

    def rules(self):
        print("rules : Teacher")

    def noticeBoard(self):
        print("notice : Teacher")


s1 = Student("Naju")
s1.rules()
s1.noticeBoard()


t1 = Teacher("Kaium", "Math")
t1.rules()
t1.noticeBoard()

# 1st May teke python next batch, 2 project
# python batch er pore Django Batch, 2 project
