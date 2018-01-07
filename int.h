#pragma once
#include "io.h"
#include <avr/interrupt.h>

#define pb0_interrupt_mode(...) pb0_pullup_input_mode(); set_flag(PCICR, PCIE0); set_flag(PCMSK0, PCINT0)
#define pb1_interrupt_mode(...) pb1_pullup_input_mode(); set_flag(PCICR, PCIE0); set_flag(PCMSK0, PCINT1)
#define pb2_interrupt_mode(...) pb2_pullup_input_mode(); set_flag(PCICR, PCIE0); set_flag(PCMSK0, PCINT2)
#define pb3_interrupt_mode(...) pb3_pullup_input_mode(); set_flag(PCICR, PCIE0); set_flag(PCMSK0, PCINT3)
#define pb4_interrupt_mode(...) pb4_pullup_input_mode(); set_flag(PCICR, PCIE0); set_flag(PCMSK0, PCINT4)
#define pb5_interrupt_mode(...) pb5_pullup_input_mode(); set_flag(PCICR, PCIE0); set_flag(PCMSK0, PCINT5)
#define pb6_interrupt_mode(...) pb6_pullup_input_mode(); set_flag(PCICR, PCIE0); set_flag(PCMSK0, PCINT6)
#define pb7_interrupt_mode(...) pb7_pullup_input_mode(); set_flag(PCICR, PCIE0); set_flag(PCMSK0, PCINT7)
#define pc0_interrupt_mode(...) pc0_pullup_input_mode(); set_flag(PCICR, PCIE1); set_flag(PCMSK1, PCINT8)
#define pc1_interrupt_mode(...) pc1_pullup_input_mode(); set_flag(PCICR, PCIE1); set_flag(PCMSK1, PCINT9)
#define pc2_interrupt_mode(...) pc2_pullup_input_mode(); set_flag(PCICR, PCIE1); set_flag(PCMSK1, PCINT10)
#define pc3_interrupt_mode(...) pc3_pullup_input_mode(); set_flag(PCICR, PCIE1); set_flag(PCMSK1, PCINT11)
#define pc4_interrupt_mode(...) pc4_pullup_input_mode(); set_flag(PCICR, PCIE1); set_flag(PCMSK1, PCINT12)
#define pc5_interrupt_mode(...) pc5_pullup_input_mode(); set_flag(PCICR, PCIE1); set_flag(PCMSK1, PCINT13)
#define pc6_interrupt_mode(...) pc6_pullup_input_mode(); set_flag(PCICR, PCIE1); set_flag(PCMSK1, PCINT14)
#define pd0_interrupt_mode(...) pd0_pullup_input_mode(); set_flag(PCICR, PCIE2); set_flag(PCMSK2, PCINT16)
#define pd1_interrupt_mode(...) pd1_pullup_input_mode(); set_flag(PCICR, PCIE2); set_flag(PCMSK2, PCINT17)
#define pd2_interrupt_mode(...) pd2_pullup_input_mode(); set_flag(PCICR, PCIE2); set_flag(PCMSK2, PCINT18)
#define pd3_interrupt_mode(...) pd3_pullup_input_mode(); set_flag(PCICR, PCIE2); set_flag(PCMSK2, PCINT19)
#define pd4_interrupt_mode(...) pd4_pullup_input_mode(); set_flag(PCICR, PCIE2); set_flag(PCMSK2, PCINT20)
#define pd5_interrupt_mode(...) pd5_pullup_input_mode(); set_flag(PCICR, PCIE2); set_flag(PCMSK2, PCINT21)
#define pd6_interrupt_mode(...) pd6_pullup_input_mode(); set_flag(PCICR, PCIE2); set_flag(PCMSK2, PCINT22)
#define pd7_interrupt_mode(...) pd7_pullup_input_mode(); set_flag(PCICR, PCIE2); set_flag(PCMSK2, PCINT23)

#define port_b_interrupt_handler(...) ISR(PCINT0_vect)
#define port_c_interrupt_handler(...) ISR(PCINT1_vect)
#define port_d_interrupt_handler(...) ISR(PCINT2_vect)
