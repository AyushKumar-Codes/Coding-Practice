class Student:
    def __init__(self, name, age, email):
        self.name = name
        self.age = age
        self.email = email

    def studentDetails(self):
        print("name:", self.name, ", age:", self.age, ", email:", self.email)


name = input("name: ")
age = int(input("age: "))
email = input("email: ")
s1 = Student(name, age, email)
s1.studentDetails()
