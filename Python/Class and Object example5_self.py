class Car:
	def setName(self, name):
		self.name = name
	def getName(self):
		return self.name
Honda = Car()
carname = input("car name: ")
Honda.setName(carname)
print("Honda car name:", Honda.getName())
print(Honda.name)
# For making a atrribute private or(data hiding )
class Car:
	def setName(self, name):
		self.__name = name # "__" is used before attribute name to make it private
	def getName(self):
		return self.name
Honda = Car()
carname = input("car name: ")
Honda.setName(carname)
print("Honda car name:", Honda.getName())
print(Honda.__name)