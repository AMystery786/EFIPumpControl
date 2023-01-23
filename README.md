# AFS EFI PUMP CONTROL
A Fuel Pump control device to adjust overpressure for direct injection vehicles working on alternate fuels.

DESCRIPTION*
When a vehicle is running on gas, no gasoline is being used and the pressure in the gasoline tank will increase. If the engine management system detects an error while the vehicle is in gas mode, such as DTC P0002, it will prevent issues like vapor lock in the gasoline line and incorrect pump driver learning, especially in a Mercedes C200 CGI.

FUNCTION*
-- To determine the actual pressure of the low gasoline in the tank
-- Using input from a simulation plan
-- No alteration to the fuel line is necessary
-- The pump's speed is regulated through Pulse Width Modulation



FUTURE GOALS*
Currently the test driver will be made on a ARDUINO UNO and a BTS7960(H-BRIDGE), After successfull trials dedicated controller and pcb will be designed.
