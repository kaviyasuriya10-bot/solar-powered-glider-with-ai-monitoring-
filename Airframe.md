## Airframe Design (CAD Model Explanation)

The airframe of the solar-powered glider is developed using CAD software such as Fusion 360 to create a precise and scalable 3D model. The design is divided into key components: fuselage, wings, and tail assembly.

### Fuselage

The fuselage is modeled as a streamlined body using extrusion from a side-profile sketch. It is designed to minimize aerodynamic drag while providing internal space for components such as the flight controller, battery, and wiring. Internal compartments are included in the CAD model to securely mount electronics and maintain structural integrity.

### Wings

The wings are created on the top plane using a rectangular base shape, then refined to resemble an airfoil profile. A long wingspan with a moderate chord length is used to improve lift and gliding efficiency. Flat sections are incorporated on the upper surface of the wings to mount flexible solar panels. The wings are mirrored across the centerline to ensure symmetry.

### Tail Assembly

The tail consists of two parts:

* Horizontal stabilizer (for pitch stability)
* Vertical stabilizer (for yaw stability)

These are modeled as thin aerodynamic surfaces attached to the rear of the fuselage. Control surfaces such as elevator and rudder are defined by separating sections in the CAD model.

### Control Surfaces

Ailerons, elevator, and rudder are created by splitting edges of the wing and tail geometry. These sections represent movable parts controlled by servo motors in the real system.

### Component Integration

The CAD model includes designated mounting areas for:

* Flight controller (Pixhawk)
* Battery
* Servo motors
* Motor mount (rear pusher configuration)
* Solar panels on wing surfaces

Proper spacing and alignment are maintained to ensure correct center of gravity and balanced weight distribution.

### Assembly and Export

All components are combined into a full assembly within the CAD environment. The final model can be exported as:

* STEP file (for engineering and sharing)
* STL file (for 3D printing)

### Design Objective

The CAD-based airframe design ensures accuracy, repeatability, and ease of modification, enabling efficient prototyping and future improvements.
