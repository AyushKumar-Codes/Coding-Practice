class Person:
	def setName(self, name):
		self.name = name
	def getName(self):
		return self.name
p1 = Person()
p2 = Person()
name1 = input('p1 name: ')
name2 = input('p2 name: ')
p1.setName(name1)
p2.setName(name2)
print("p1 name:", p1.getName())
print("p2 name:", p2.getName())