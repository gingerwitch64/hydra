#pragma once

#define PIC1_COMMAND 0x20
#define PIC1_DATA 0x21
#define PIC2_COMMAND 0xA0
#define PIC2_DATA 0xA1
#define PIC_EOI 0x20

#define ICW1_INIT 0x10
#define ICW1_ICW4 0x01
#define ICW4_8086 0x01

struct InterruptFrame;
__attribute__((interrupt)) void PageFaultHandler(struct InterruptFrame* frame);
__attribute__((interrupt)) void DoubleFaultHandler(struct InterruptFrame* frame);
__attribute__((interrupt)) void GeneralProtectionFaultHandler(struct InterruptFrame* frame);
__attribute__((interrupt)) void PS2KBHandler(struct InterruptFrame* frame);

void MapPIC();
void PIC_EndMaster();
void PIC_EndSlave();