class Person:
    # Constructor
    def __init__(self, name, id):
        self.name = name
        self.id = id

    def display(self):
        print("Name is:",self.name," and Id is:",self.id)

class Emp(Person):
    def __init__(self, name, id,salary):
        super().__init__(name, id)
        self.salary=salary

    def output(self):
        print("Salary is:",self.salary)

Emp_details = Emp("Suresh", 101,23000)
Emp_details.display()
Emp_details.output()
