class Car:
    def setbrandname(self, brandname):
        self.brandname = brandname

    def getbrandname(self):
        print(self.brandname)

    def setmodel(self, model):
        self.model = model

    def getmodel(self):
        print(self.model)


class Accord(Car):
    def setbrandname(self, brandname):
        self.brandname = brandname

    def getbrandname(self):
        print(self.brandname)

obj = Accord()
brandname = input('brand: ')
modelname = input('model: ')
obj.setbrandname(brandname)
obj.setmodel(modelname)
obj.getbrandname()
obj.getmodel()