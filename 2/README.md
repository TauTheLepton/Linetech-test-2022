# Task 2

First of all, we need transformations from every link to the next in the kinematics chain of the robotic arm.
With that we can, not only, calculate the distance, but also the exact coordinates of the point measured in the base link coordinate system.

Transformations can be described with transformation matrices.
Each transformation matrix contains the offset from the next frame and the exact rotation described by a quaternion.

For example let's say we have a base link 'A' and link 'B' that is the next one in the kinematics chain of some very simple robot.
Both of these links have their own coordinate systems.
Let's say we also have a transformation matrix from frame B to A (so essentially we know how these links are positioned in relation to each other, which is probably true, because we know how this robot is built).
If we have a point in the coordinate system B, then by multiplying this point's coordinates by the transformation matrix from frame B to A, we get the coordinates of this exact same point, but this time in the coordinate system of link A.
So the point in space is the same, but we get the coordinates in different coordinate systems.

If we have such a transformation matrix from every link to the next one in the whole kinematics chain we can perform this operation multiple times, each time going down one link, up to the point in which we end up in the base link.

We can safely assume it is easy to find the measured point in the coordinate system corresponding to the end effector, because the laser distance sensor is, most probably, positioned parallelly to the Z-axis of this coordinate system, so the measurement of the laser distance scanner is just offset on the Z-axis with the other offsets (X and Y) being 0.

If we have coordinates of this point and know that the base link is in the center of its coordinate system we need to solve this simple equation:

d = sqrt( x^2 + y^2 + z^2 )
