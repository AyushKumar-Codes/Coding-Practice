class Car:
	def setDetails(self, model, regno):
		self.model = model
		self.regno = regno
	def getModel(self):
		return self.model
	def getRegno(self):
		return self.regno
Hyundai = Car()
Maruti = Car()
model1 = input('car1 model: ')
regno1 = input('car1 regno: ')
model2 = input('car2 model: ')
regno2 = input('car2 regno: ')
Hyundai.setDetails(model1, regno1)
Maruti.setDetails(model2, regno2)
print("Hyundai car details:", Hyundai.getModel(), Hyundai.getRegno())
print("Maruti car details:", Maruti.getModel(), Maruti.getRegno())