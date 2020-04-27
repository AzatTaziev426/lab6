import numpy as np
import pylab
import numpy
import matplotlib.pyplot as plt
data = np.loadtxt("/home/azat/Документы/МММ/lab6/b.txt")
plt.plot(data[:, 0], data[:, 1])
plt.show()
def makeData():
	x = numpy.arange(-50, 50, 0.1)
	y = numpy.arange(-50, 50, 0.1)
	xgrid, ygrid = numpy.meshgrid(x, y)
	zgrid = (-(xgrid * xgrid * ygrid  - 10 * xgrid * xgrid + 26 * xgrid * ygrid  - 260 * xgrid + ygrid  * ygrid  * ygrid  - 30 * ygrid  * ygrid  + 460 * ygrid  - 2599))
	return xgrid, ygrid, zgrid

x, y, z = makeData()
pylab.contour(x, y, z,50)
pylab.show()