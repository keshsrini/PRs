# Fix the class initialization
class Person:
    def __init__(name, age):
        self.name = name
        self.age = age

p = Person("Bob", 30)
print(p.name)
