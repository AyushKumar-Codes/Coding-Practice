class Car:
	__engineno = "EK1"
	__modelno = "VX6"
	def setcarinfo(self, engineno, modelno):
		self.__engineno = engineno
		self.__modelno = modelno
	def getcarinfo(self):
		print(self.__engineno, self.__modelno, self.color, self.year)
hondacity = Car()
engnumber = input("engine number: ")
hondacity.setcarinfo(engnumber, "SX6")
hondacity.color = "Blue"
hondacity.year = "2018"
hondacity.getcarinfo()
# print(hondacity.__modelno)