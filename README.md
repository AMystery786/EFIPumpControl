# AFSEFIPUMP CONTROL
A Fuel Pump control device to adjust overpressure for direct injection vehicles working on alternate fuels.

DESCRIPTION*
While driving on gas, no petrol is injected and the low pressure from the petrol tank will rise. when the engine management  generates a error during gas mode ( especially Merc C200 CGI) with DTC like P0002, it prevents problems like vapour lock in petrol line, Invalid learning of pump driver,  

FUNCTION*
- To measure actual low petrol pressure from the petrol tank
- Input from simulation strategy
- No Fuel line modification required
- Pump speed control via PulseWidthModulation

FUTURE GOALS*
Currently the test driver will be made on a ARDUINO UNO and a BTS7960(H-BRIDGE), After successfull trials dedicated controller and pcb will be designed.
