# hmin_loop.c
Classical Physics - Minimum height for attriction loop, numerical resolucion.
In uniform circular motion, energy is conserved when there are no dissipative 
forces in the system. making it possible to calculate kinetic and potential 
energy in the energy dissipated during the movement, which has the formula:
Wa= Uc*N*delta(s) = Uc*((mv²)/2 + m*g*cos(theta)
N varies per point, due to the variation of speed and angle.
This code is intended to calculate the minimum height that the project has 
to start in the trajectory to complete the loop with attriction. 
Taking the coefficient of fattriction and radius as input, it is possible to have
the lowest speed at the highest point of the loop to complete the loop.
Thus, the energy is distributed in a previous delta(s) and arrive at the speed
of that point and make this calculation until the point that the particle enters the loop,
finding the initial energy and consequently the minimum height
