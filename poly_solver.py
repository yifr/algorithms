#Solve for coefficients of a polynomial equation using numpy.linalg

import numpy as np
import math

def p(x, a2, a1, a0):
    return (a2*math.pow(x, 2) + a1*x + a0)

def main():
    #Dictionary mapping x:p(x)
    values = {1: -1, 2: 1, 3: 0}
    #(i, j, k) = solve(values)
    eqs = np.array([[1, 1, 1], [4, 2, 1], [9, 3, 1]])
    sols = np.array([-1, 1, 0])
    coeffs = np.linalg.solve(eqs, sols)
    print(coeffs)
    dotted = np.dot(eqs, coeffs)
    print(dotted)
    print(sols)
    for i in range(3):
        print("p(" + str(i) + "): ", p(i+1, coeffs[0], coeffs[1], coeffs[2]))

if __name__ == "__main__":
    main()



